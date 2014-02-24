<?php
/**
 * @file
 * export_assembly_instruction.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function export_assembly_instruction_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create roadmap_waypoint content'.
  $permissions['create roadmap_waypoint content'] = array(
    'name' => 'create roadmap_waypoint content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any roadmap_waypoint content'.
  $permissions['delete any roadmap_waypoint content'] = array(
    'name' => 'delete any roadmap_waypoint content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own roadmap_waypoint content'.
  $permissions['delete own roadmap_waypoint content'] = array(
    'name' => 'delete own roadmap_waypoint content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any roadmap_waypoint content'.
  $permissions['edit any roadmap_waypoint content'] = array(
    'name' => 'edit any roadmap_waypoint content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own roadmap_waypoint content'.
  $permissions['edit own roadmap_waypoint content'] = array(
    'name' => 'edit own roadmap_waypoint content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
