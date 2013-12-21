<?php
/**
 * @file
 * geek_pages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function geek_pages_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create geek_page content'.
  $permissions['create geek_page content'] = array(
    'name' => 'create geek_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any geek_page content'.
  $permissions['delete any geek_page content'] = array(
    'name' => 'delete any geek_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own geek_page content'.
  $permissions['delete own geek_page content'] = array(
    'name' => 'delete own geek_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any geek_page content'.
  $permissions['edit any geek_page content'] = array(
    'name' => 'edit any geek_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own geek_page content'.
  $permissions['edit own geek_page content'] = array(
    'name' => 'edit own geek_page content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
