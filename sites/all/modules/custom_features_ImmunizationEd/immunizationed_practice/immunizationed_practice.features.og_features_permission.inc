<?php
/**
 * @file
 * immunizationed_practice.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function immunizationed_practice_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:practice_group:add user'
  $permissions['node:practice_group:add user'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:approve and deny subscription'
  $permissions['node:practice_group:approve and deny subscription'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:manage members'
  $permissions['node:practice_group:manage members'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:manage permissions'
  $permissions['node:practice_group:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:manage roles'
  $permissions['node:practice_group:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:subscribe'
  $permissions['node:practice_group:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:subscribe without approval'
  $permissions['node:practice_group:subscribe without approval'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:unsubscribe'
  $permissions['node:practice_group:unsubscribe'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:update group'
  $permissions['node:practice_group:update group'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
