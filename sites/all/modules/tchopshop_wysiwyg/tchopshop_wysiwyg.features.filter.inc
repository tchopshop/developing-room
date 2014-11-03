<?php
/**
 * @file
 * tchopshop_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function tchopshop_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Admin
  $formats['admin'] = array(
    'format' => 'admin',
    'name' => 'Admin',
    'cache' => '0',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_htmlcorrector' => array(
        'weight' => '-48',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(),
      ),
      'emptyparagraphkiller' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
      'image_resize_filter' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'video_filter' => array(
        'weight' => '-44',
        'status' => '1',
        'settings' => array(
          'video_filter_width' => '400',
          'video_filter_height' => '400',
          'video_filter_autoplay' => '0',
          'video_filter_related' => '0',
          'video_filter_html5' => '1',
        ),
      ),
      'filter_url' => array(
        'weight' => '-43',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'ckeditor_link_filter' => array(
        'weight' => '-41',
        'status' => '1',
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => '-40',
        'status' => '1',
        'settings' => array(
          'local_paths' => '/',
          'absolute' => 1,
        ),
      ),
    ),
  );

  // Exported format: Basic
  $formats['basic'] = array(
    'format' => 'basic',
    'name' => 'Basic',
    'cache' => '0',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-50',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 1,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(),
      ),
      'emptyparagraphkiller' => array(
        'weight' => '-44',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '-43',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'ckeditor_link_filter' => array(
        'weight' => '-42',
        'status' => '1',
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => '-40',
        'status' => '1',
        'settings' => array(
          'local_paths' => '/',
          'absolute' => 1,
        ),
      ),
    ),
  );

  // Exported format: Standard
  $formats['standard'] = array(
    'format' => 'standard',
    'name' => 'Standard',
    'cache' => '0',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_htmlcorrector' => array(
        'weight' => '-48',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(),
      ),
      'wysiwyg' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(
          'valid_elements' => 'a[!href|target<_blank|title],
    div[align<center?justify?left?right],
    p[align<center?justify?left?right],
    span[class],
    br,em,strong,blockquote,ul,ol,li,dl,dt,dd,h2,h3,
    img[src|alt|class]',
          'allow_comments' => '0',
          'nofollow_policy' => 'whitelist',
          'nofollow_domains' => array(
            0 => 'localhost',
          ),
          'style_color' => array(
            'color' => 0,
            'background' => 0,
            'background-color' => 0,
            'background-image' => 0,
            'background-repeat' => 0,
            'background-attachment' => 0,
            'background-position' => 0,
          ),
          'style_font' => array(
            'font' => 0,
            'font-family' => 0,
            'font-size' => 0,
            'font-size-adjust' => 0,
            'font-stretch' => 0,
            'font-style' => 0,
            'font-variant' => 0,
            'font-weight' => 0,
          ),
          'style_text' => array(
            'text-align' => 0,
            'text-decoration' => 0,
            'text-indent' => 0,
            'text-transform' => 0,
            'letter-spacing' => 0,
            'word-spacing' => 0,
            'white-space' => 0,
            'direction' => 0,
            'unicode-bidi' => 0,
          ),
          'style_box' => array(
            'margin' => 0,
            'margin-top' => 0,
            'margin-right' => 0,
            'margin-bottom' => 0,
            'margin-left' => 0,
            'padding' => 0,
            'padding-top' => 0,
            'padding-right' => 0,
            'padding-bottom' => 0,
            'padding-left' => 0,
          ),
          'style_border-1' => array(
            'border' => 0,
            'border-top' => 0,
            'border-right' => 0,
            'border-bottom' => 0,
            'border-left' => 0,
            'border-width' => 0,
            'border-top-width' => 0,
            'border-right-width' => 0,
            'border-bottom-width' => 0,
            'border-left-width' => 0,
          ),
          'style_border-2' => array(
            'border-color' => 0,
            'border-top-color' => 0,
            'border-right-color' => 0,
            'border-bottom-color' => 0,
            'border-left-color' => 0,
            'border-style' => 0,
            'border-top-style' => 0,
            'border-right-style' => 0,
            'border-bottom-style' => 0,
            'border-left-style' => 0,
          ),
          'style_dimension' => array(
            'height' => 0,
            'line-height' => 0,
            'max-height' => 0,
            'max-width' => 0,
            'min-height' => 0,
            'min-width' => 0,
            'width' => 0,
          ),
          'style_positioning' => array(
            'bottom' => 0,
            'clip' => 0,
            'left' => 0,
            'overflow' => 0,
            'right' => 0,
            'top' => 0,
            'vertical-align' => 0,
            'z-index' => 0,
          ),
          'style_layout' => array(
            'clear' => 0,
            'display' => 0,
            'float' => 0,
            'position' => 0,
            'visibility' => 0,
          ),
          'style_list' => array(
            'list-style' => 0,
            'list-style-image' => 0,
            'list-style-position' => 0,
            'list-style-type' => 0,
          ),
          'style_table' => array(
            'border-collapse' => 0,
            'border-spacing' => 0,
            'caption-side' => 0,
            'empty-cells' => 0,
            'table-layout' => 0,
          ),
          'style_user' => array(
            'cursor' => 0,
            'outline' => 0,
            'outline-width' => 0,
            'outline-style' => 0,
            'outline-color' => 0,
            'zoom' => 0,
          ),
          'rule_valid_classes' => array(),
          'rule_valid_ids' => array(),
          'rule_style_urls' => array(),
        ),
      ),
      'image_resize_filter' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'video_filter' => array(
        'weight' => '-44',
        'status' => '1',
        'settings' => array(
          'video_filter_width' => '400',
          'video_filter_height' => '400',
          'video_filter_autoplay' => '0',
          'video_filter_related' => '0',
          'video_filter_html5' => '1',
        ),
      ),
      'filter_url' => array(
        'weight' => '-43',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'ckeditor_link_filter' => array(
        'weight' => '-42',
        'status' => '1',
        'settings' => array(),
      ),
      'emptyparagraphkiller' => array(
        'weight' => '-41',
        'status' => '1',
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => '-40',
        'status' => '1',
        'settings' => array(
          'local_paths' => '/',
          'absolute' => 1,
        ),
      ),
    ),
  );

  return $formats;
}
