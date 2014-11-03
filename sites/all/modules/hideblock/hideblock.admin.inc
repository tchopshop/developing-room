<?php
/**
  * @file
  * Administration page callbacks for the hideblock module.
  */

/**
 * Form builder. Configure Hideblock.
 *
 * @ingroup forms
 * @see system_settings_form( ).
 */

function hideblock_admin_settings() {
    // Get an array of blocks which you may want to hideblock
    $result = db_query('SELECT * FROM {block} WHERE theme = :theme', array(':theme'=>variable_get( 'theme_default')));
    foreach( $result as $block ) {
        // Since there can be lots of blocks with same delta but not bid we'll use the delta'
        // Todo: find out how to print blocks region title, not the delta'
        $options[$block->module.'_'.$block->delta] = $block->module.'_'.$block->delta;
    } 
    
    $form['hideblock_block_list'] = array( 
         '#description' => t('These blocks are hidden from other than super admins eyes'),
         '#type' => 'checkboxes',
         '#options' => $options,
    );
    $form['#submit'][] = 'hideblock_admin_settings_submit';
    return system_settings_form($form);
}

/**
 * Implementation of hook_form_FORM_ID_alter
 **/
function hideblock_form_hideblock_admin_settings_alter(&$form, &$form_state, $form_id) {
    $result = db_query('SELECT delta FROM {hideblock}');
    foreach($result as $block) {
       $form['hideblock_block_list'][$block->delta] = array(
        '#default_value' => TRUE,
        '#checked' => TRUE,
        );
    }
    return $form;
}

/**
 * Process hideblock settings submission.
 **/

function hideblock_admin_settings_submit( $form, $form_state) {
    //Loop through the checkboxes
    foreach ( $form_state['values']['hideblock_block_list'] as $key => $value) {
        // If values are checked. Add the fields delta in to the hideblock table.
        $result = db_query('SELECT count(*) FROM {hideblock} WHERE delta = :delta', array(':delta'=> $key))->fetchField();
        if ($value !== 0 && $result == 0 ) {
            $num_updated = db_insert('hideblock')
                ->fields(array( 
                    'delta' => $key,
                ))
                ->execute( );
        }
        elseif (!isset($form['hideblock_block_list'][$value]['#checked']) && $result != 0) {
          $num_deleted = db_delete('hideblock')
             ->condition('delta', $key, '=')
             ->execute( );
        }
    }
}
