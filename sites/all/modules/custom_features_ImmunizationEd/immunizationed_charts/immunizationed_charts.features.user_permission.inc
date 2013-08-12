<?php
/**
 * @file
 * immunizationed_charts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function immunizationed_charts_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer analytics dashboard'.
  $permissions['administer analytics dashboard'] = array(
    'name' => 'administer analytics dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'analytics_dashboard',
  );

  // Exported permission: 'view analytics dashboard'.
  $permissions['view analytics dashboard'] = array(
    'name' => 'view analytics dashboard',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'analytics_dashboard',
  );

  return $permissions;
}
