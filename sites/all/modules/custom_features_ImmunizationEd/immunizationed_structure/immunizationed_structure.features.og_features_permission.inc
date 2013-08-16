<?php
/**
 * @file
 * immunizationed_structure.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function immunizationed_structure_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:practice_group:update field_certification_entity field'
  $permissions['node:practice_group:update field_certification_entity field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_educational_objectives field'
  $permissions['node:practice_group:update field_educational_objectives field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_certification_entity field'
  $permissions['node:practice_group:view field_certification_entity field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_educational_objectives field'
  $permissions['node:practice_group:view field_educational_objectives field'] = array(
    'roles' => array(),
  );

  return $permissions;
}
