<?php
/**
 * @file
 * conflicting_permissions_for_dev.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function conflicting_permissions_for_dev_user_default_permissions() {
  $permissions = array();

  // Exported permission: access rules debug.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules',
  );

  return $permissions;
}
