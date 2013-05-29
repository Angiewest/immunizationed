<?php
/**
 * @file
 * immunizationed_permissions.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function immunizationed_permissions_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:practice_group:Administrator member'.
  $roles['node:practice_group:Administrator member'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'practice_group',
    'name' => 'Administrator member',
  );

  return $roles;
}