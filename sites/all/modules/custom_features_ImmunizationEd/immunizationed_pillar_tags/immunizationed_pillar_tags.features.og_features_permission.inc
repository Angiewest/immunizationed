<?php
/**
 * @file
 * immunizationed_pillar_tags.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function immunizationed_pillar_tags_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:practice_admin_group:update field_pillar_tags field'
  $permissions['node:practice_admin_group:update field_pillar_tags field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_pillar_tags field'
  $permissions['node:practice_admin_group:view field_pillar_tags field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_pillar_tags field'
  $permissions['node:practice_group:update field_pillar_tags field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_pillar_tags field'
  $permissions['node:practice_group:view field_pillar_tags field'] = array(
    'roles' => array(),
  );

  return $permissions;
}
