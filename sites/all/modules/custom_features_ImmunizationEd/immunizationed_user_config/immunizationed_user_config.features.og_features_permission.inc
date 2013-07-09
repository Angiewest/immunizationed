<?php
/**
 * @file
 * immunizationed_user_config.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function immunizationed_user_config_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:practice_group:update field_first_names field'
  $permissions['node:practice_group:update field_first_names field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_job_other field'
  $permissions['node:practice_group:update field_job_other field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_last_names field'
  $permissions['node:practice_group:update field_last_names field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_practice_jobs field'
  $permissions['node:practice_group:update field_practice_jobs field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_salutations field'
  $permissions['node:practice_group:update field_salutations field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_visitor field'
  $permissions['node:practice_group:update field_visitor field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update og_user_node field'
  $permissions['node:practice_group:update og_user_node field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_first_names field'
  $permissions['node:practice_group:view field_first_names field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_job_other field'
  $permissions['node:practice_group:view field_job_other field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_last_names field'
  $permissions['node:practice_group:view field_last_names field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_practice_jobs field'
  $permissions['node:practice_group:view field_practice_jobs field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_salutations field'
  $permissions['node:practice_group:view field_salutations field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_visitor field'
  $permissions['node:practice_group:view field_visitor field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:view og_user_node field'
  $permissions['node:practice_group:view og_user_node field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  return $permissions;
}
