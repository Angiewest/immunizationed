<?php
/**
 * @file
 * immunizationed_rules.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function immunizationed_rules_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  return $permissions;
}
