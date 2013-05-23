<?php
/**
 * @file
 * immunizationed_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function immunizationed_core_user_default_roles() {
  $roles = array();

  // Exported role: Co-I admin.
  $roles['Co-I admin'] = array(
    'name' => 'Co-I admin',
    'weight' => 4,
  );

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

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 7,
  );

  // Exported role: apprentice admin.
  $roles['apprentice admin'] = array(
    'name' => 'apprentice admin',
    'weight' => 6,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 5,
  );

  return $roles;
}
