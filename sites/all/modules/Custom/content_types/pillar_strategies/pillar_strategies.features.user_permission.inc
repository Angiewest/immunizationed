<?php
/**
 * @file
 * pillar_strategies.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pillar_strategies_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create convenient_vaccination_services content'.
  $permissions['create convenient_vaccination_services content'] = array(
    'name' => 'create convenient_vaccination_services content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create enhanced_vaccination_systems content'.
  $permissions['create enhanced_vaccination_systems content'] = array(
    'name' => 'create enhanced_vaccination_systems content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create motivation content'.
  $permissions['create motivation content'] = array(
    'name' => 'create motivation content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create patient_notification content'.
  $permissions['create patient_notification content'] = array(
    'name' => 'create patient_notification content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any convenient_vaccination_services content'.
  $permissions['delete any convenient_vaccination_services content'] = array(
    'name' => 'delete any convenient_vaccination_services content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any enhanced_vaccination_systems content'.
  $permissions['delete any enhanced_vaccination_systems content'] = array(
    'name' => 'delete any enhanced_vaccination_systems content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any motivation content'.
  $permissions['delete any motivation content'] = array(
    'name' => 'delete any motivation content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any patient_notification content'.
  $permissions['delete any patient_notification content'] = array(
    'name' => 'delete any patient_notification content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own convenient_vaccination_services content'.
  $permissions['delete own convenient_vaccination_services content'] = array(
    'name' => 'delete own convenient_vaccination_services content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own enhanced_vaccination_systems content'.
  $permissions['delete own enhanced_vaccination_systems content'] = array(
    'name' => 'delete own enhanced_vaccination_systems content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own motivation content'.
  $permissions['delete own motivation content'] = array(
    'name' => 'delete own motivation content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own patient_notification content'.
  $permissions['delete own patient_notification content'] = array(
    'name' => 'delete own patient_notification content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any convenient_vaccination_services content'.
  $permissions['edit any convenient_vaccination_services content'] = array(
    'name' => 'edit any convenient_vaccination_services content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any enhanced_vaccination_systems content'.
  $permissions['edit any enhanced_vaccination_systems content'] = array(
    'name' => 'edit any enhanced_vaccination_systems content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any motivation content'.
  $permissions['edit any motivation content'] = array(
    'name' => 'edit any motivation content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any patient_notification content'.
  $permissions['edit any patient_notification content'] = array(
    'name' => 'edit any patient_notification content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own convenient_vaccination_services content'.
  $permissions['edit own convenient_vaccination_services content'] = array(
    'name' => 'edit own convenient_vaccination_services content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own enhanced_vaccination_systems content'.
  $permissions['edit own enhanced_vaccination_systems content'] = array(
    'name' => 'edit own enhanced_vaccination_systems content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own motivation content'.
  $permissions['edit own motivation content'] = array(
    'name' => 'edit own motivation content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own patient_notification content'.
  $permissions['edit own patient_notification content'] = array(
    'name' => 'edit own patient_notification content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
