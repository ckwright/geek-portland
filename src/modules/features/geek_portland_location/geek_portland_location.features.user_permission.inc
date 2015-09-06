<?php
/**
 * @file
 * geek_portland_location.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function geek_portland_location_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create location content'.
  $permissions['create location content'] = array(
    'name' => 'create location content',
    'roles' => array(
      'event administrator' => 'event administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any location content'.
  $permissions['delete any location content'] = array(
    'name' => 'delete any location content',
    'roles' => array(
      'site editor' => 'site editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own location content'.
  $permissions['delete own location content'] = array(
    'name' => 'delete own location content',
    'roles' => array(
      'site editor' => 'site editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any location content'.
  $permissions['edit any location content'] = array(
    'name' => 'edit any location content',
    'roles' => array(
      'site editor' => 'site editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own location content'.
  $permissions['edit own location content'] = array(
    'name' => 'edit own location content',
    'roles' => array(
      'site editor' => 'site editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
