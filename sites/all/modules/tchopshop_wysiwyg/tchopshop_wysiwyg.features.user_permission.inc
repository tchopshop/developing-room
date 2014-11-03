<?php
/**
 * @file
 * tchopshop_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tchopshop_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: access ckeditor link
  $permissions['access ckeditor link'] = array(
    'name' => 'access ckeditor link',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: use text format admin
  $permissions['use text format admin'] = array(
    'name' => 'use text format admin',
    'roles' => array(
      0 => 'Admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format basic
  $permissions['use text format basic'] = array(
    'name' => 'use text format basic',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format standard
  $permissions['use text format standard'] = array(
    'name' => 'use text format standard',
    'roles' => array(
      0 => 'Editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
