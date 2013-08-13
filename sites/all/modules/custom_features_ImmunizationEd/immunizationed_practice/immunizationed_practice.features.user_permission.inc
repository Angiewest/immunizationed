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

  // Exported permission: 'administer panelizer node practice_group content'.
  $permissions['administer panelizer node practice_group content'] = array(
    'name' => 'administer panelizer node practice_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node practice_group context'.
  $permissions['administer panelizer node practice_group context'] = array(
    'name' => 'administer panelizer node practice_group context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node practice_group defaults'.
  $permissions['administer panelizer node practice_group defaults'] = array(
    'name' => 'administer panelizer node practice_group defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node practice_group layout'.
  $permissions['administer panelizer node practice_group layout'] = array(
    'name' => 'administer panelizer node practice_group layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node practice_group overview'.
  $permissions['administer panelizer node practice_group overview'] = array(
    'name' => 'administer panelizer node practice_group overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node practice_group settings'.
  $permissions['administer panelizer node practice_group settings'] = array(
    'name' => 'administer panelizer node practice_group settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create practice_admin_group content'.
  $permissions['create practice_admin_group content'] = array(
    'name' => 'create practice_admin_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any practice_admin_group content'.
  $permissions['delete any practice_admin_group content'] = array(
    'name' => 'delete any practice_admin_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any practice_group content'.
  $permissions['delete any practice_group content'] = array(
    'name' => 'delete any practice_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own practice_admin_group content'.
  $permissions['delete own practice_admin_group content'] = array(
    'name' => 'delete own practice_admin_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own practice_group content'.
  $permissions['delete own practice_group content'] = array(
    'name' => 'delete own practice_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any practice_admin_group content'.
  $permissions['edit any practice_admin_group content'] = array(
    'name' => 'edit any practice_admin_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any practice_group content'.
  $permissions['edit any practice_group content'] = array(
    'name' => 'edit any practice_group content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own practice_admin_group content'.
  $permissions['edit own practice_admin_group content'] = array(
    'name' => 'edit own practice_admin_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own practice_group content'.
  $permissions['edit own practice_group content'] = array(
    'name' => 'edit own practice_group content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'execute og_membership_delete_action'.
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

  // Exported permission: 'execute og_set_state_action'.
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

  // Exported permission: 'execute og_user_roles_action'.
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
