<?php
/**
 * @file
 * tchopshop_wysiwyg.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function tchopshop_wysiwyg_user_default_roles() {
  $roles = array();

  // Exported role: Admin
  $roles['Admin'] = array(
    'name' => 'Admin',
    'weight' => '3',
  );

  // Exported role: Editor
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => '2',
  );

  return $roles;
}
