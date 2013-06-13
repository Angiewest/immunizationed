<?php
/**
 * @file
 * immunizationed_practice_admin_group_config.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function immunizationed_practice_admin_group_config_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:practice_admin_group:administer group'
  $permissions['node:practice_admin_group:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:create announcement content'
  $permissions['node:practice_admin_group:create announcement content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:create article content'
  $permissions['node:practice_admin_group:create article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:create convenient_vaccination_services content'
  $permissions['node:practice_admin_group:create convenient_vaccination_services content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:create enhanced_vaccination_systems content'
  $permissions['node:practice_admin_group:create enhanced_vaccination_systems content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:create meeting_agenda content'
  $permissions['node:practice_admin_group:create meeting_agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:create motivation content'
  $permissions['node:practice_admin_group:create motivation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:create patient_notification content'
  $permissions['node:practice_admin_group:create patient_notification content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:create task content'
  $permissions['node:practice_admin_group:create task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:create vaccination_data_from_emr content'
  $permissions['node:practice_admin_group:create vaccination_data_from_emr content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete any announcement content'
  $permissions['node:practice_admin_group:delete any announcement content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete any article content'
  $permissions['node:practice_admin_group:delete any article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete any convenient_vaccination_services content'
  $permissions['node:practice_admin_group:delete any convenient_vaccination_services content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete any enhanced_vaccination_systems content'
  $permissions['node:practice_admin_group:delete any enhanced_vaccination_systems content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete any meeting_agenda content'
  $permissions['node:practice_admin_group:delete any meeting_agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete any motivation content'
  $permissions['node:practice_admin_group:delete any motivation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete any patient_notification content'
  $permissions['node:practice_admin_group:delete any patient_notification content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete any task content'
  $permissions['node:practice_admin_group:delete any task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:delete any vaccination_data_from_emr content'
  $permissions['node:practice_admin_group:delete any vaccination_data_from_emr content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete own announcement content'
  $permissions['node:practice_admin_group:delete own announcement content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete own article content'
  $permissions['node:practice_admin_group:delete own article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete own convenient_vaccination_services content'
  $permissions['node:practice_admin_group:delete own convenient_vaccination_services content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete own enhanced_vaccination_systems content'
  $permissions['node:practice_admin_group:delete own enhanced_vaccination_systems content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete own meeting_agenda content'
  $permissions['node:practice_admin_group:delete own meeting_agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete own motivation content'
  $permissions['node:practice_admin_group:delete own motivation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete own patient_notification content'
  $permissions['node:practice_admin_group:delete own patient_notification content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete own task content'
  $permissions['node:practice_admin_group:delete own task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:delete own vaccination_data_from_emr content'
  $permissions['node:practice_admin_group:delete own vaccination_data_from_emr content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update any announcement content'
  $permissions['node:practice_admin_group:update any announcement content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update any article content'
  $permissions['node:practice_admin_group:update any article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update any convenient_vaccination_services content'
  $permissions['node:practice_admin_group:update any convenient_vaccination_services content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update any enhanced_vaccination_systems content'
  $permissions['node:practice_admin_group:update any enhanced_vaccination_systems content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update any meeting_agenda content'
  $permissions['node:practice_admin_group:update any meeting_agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update any motivation content'
  $permissions['node:practice_admin_group:update any motivation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update any patient_notification content'
  $permissions['node:practice_admin_group:update any patient_notification content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update any task content'
  $permissions['node:practice_admin_group:update any task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:update any vaccination_data_from_emr content'
  $permissions['node:practice_admin_group:update any vaccination_data_from_emr content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update group'
  $permissions['node:practice_admin_group:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:update own announcement content'
  $permissions['node:practice_admin_group:update own announcement content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update own article content'
  $permissions['node:practice_admin_group:update own article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update own convenient_vaccination_services content'
  $permissions['node:practice_admin_group:update own convenient_vaccination_services content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update own enhanced_vaccination_systems content'
  $permissions['node:practice_admin_group:update own enhanced_vaccination_systems content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update own meeting_agenda content'
  $permissions['node:practice_admin_group:update own meeting_agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update own motivation content'
  $permissions['node:practice_admin_group:update own motivation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update own patient_notification content'
  $permissions['node:practice_admin_group:update own patient_notification content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update own task content'
  $permissions['node:practice_admin_group:update own task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:update own vaccination_data_from_emr content'
  $permissions['node:practice_admin_group:update own vaccination_data_from_emr content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
