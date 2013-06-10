<?php
/**
 * @file
 * conflicting_permissions_for_production.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function conflicting_permissions_for_production_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:practice_group:administer group'
  $permissions['node:practice_group:administer group'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  return $permissions;
}
