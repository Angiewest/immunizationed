<?php
/**
 * @file
 * immunizationed_practice.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function immunizationed_practice_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer group.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'og',
  );

  // Exported permission: execute og_membership_delete_action.
  $permissions['execute og_membership_delete_action'] = array(
    'name' => 'execute og_membership_delete_action',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute og_set_state_action.
  $permissions['execute og_set_state_action'] = array(
    'name' => 'execute og_set_state_action',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute og_user_roles_action.
  $permissions['execute og_user_roles_action'] = array(
    'name' => 'execute og_user_roles_action',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'actions_permissions',
  );

  return $permissions;
}
