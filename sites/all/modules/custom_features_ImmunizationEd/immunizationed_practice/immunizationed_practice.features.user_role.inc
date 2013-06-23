<?php
/**
 * @file
 * immunizationed_practice.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function immunizationed_practice_user_default_roles() {
  $roles = array();

  // Exported role: Group member.
  $roles['Group member'] = array(
    'name' => 'Group member',
    'weight' => 2,
  );

  // Exported role: Practice admin.
  $roles['Practice admin'] = array(
    'name' => 'Practice admin',
    'weight' => 3,
  );

  return $roles;
}
