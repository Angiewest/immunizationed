<?php
/**
 * @file
 * immunizationed_emr_importer.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function immunizationed_emr_importer_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node vaccination_data_from_emr defaults.
  $permissions['administer panelizer node vaccination_data_from_emr defaults'] = array(
    'name' => 'administer panelizer node vaccination_data_from_emr defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: clear emr_importer feeds.
  $permissions['clear emr_importer feeds'] = array(
    'name' => 'clear emr_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: create field_epic_id.
  $permissions['create field_epic_id'] = array(
    'name' => 'create field_epic_id',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_influenza.
  $permissions['create field_influenza'] = array(
    'name' => 'create field_influenza',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_pneumo.
  $permissions['create field_pneumo'] = array(
    'name' => 'create field_pneumo',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_reporting_period.
  $permissions['create field_reporting_period'] = array(
    'name' => 'create field_reporting_period',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_td.
  $permissions['create field_td'] = array(
    'name' => 'create field_td',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_tdap.
  $permissions['create field_tdap'] = array(
    'name' => 'create field_tdap',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_total.
  $permissions['create field_total'] = array(
    'name' => 'create field_total',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_visits.
  $permissions['create field_visits'] = array(
    'name' => 'create field_visits',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create vaccination_data_from_emr content.
  $permissions['create vaccination_data_from_emr content'] = array(
    'name' => 'create vaccination_data_from_emr content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any vaccination_data_from_emr content.
  $permissions['delete any vaccination_data_from_emr content'] = array(
    'name' => 'delete any vaccination_data_from_emr content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own vaccination_data_from_emr content.
  $permissions['delete own vaccination_data_from_emr content'] = array(
    'name' => 'delete own vaccination_data_from_emr content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any vaccination_data_from_emr content.
  $permissions['edit any vaccination_data_from_emr content'] = array(
    'name' => 'edit any vaccination_data_from_emr content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit field_epic_id.
  $permissions['edit field_epic_id'] = array(
    'name' => 'edit field_epic_id',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_influenza.
  $permissions['edit field_influenza'] = array(
    'name' => 'edit field_influenza',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_pneumo.
  $permissions['edit field_pneumo'] = array(
    'name' => 'edit field_pneumo',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_reporting_period.
  $permissions['edit field_reporting_period'] = array(
    'name' => 'edit field_reporting_period',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_td.
  $permissions['edit field_td'] = array(
    'name' => 'edit field_td',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_tdap.
  $permissions['edit field_tdap'] = array(
    'name' => 'edit field_tdap',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_total.
  $permissions['edit field_total'] = array(
    'name' => 'edit field_total',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_visits.
  $permissions['edit field_visits'] = array(
    'name' => 'edit field_visits',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_epic_id.
  $permissions['edit own field_epic_id'] = array(
    'name' => 'edit own field_epic_id',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_influenza.
  $permissions['edit own field_influenza'] = array(
    'name' => 'edit own field_influenza',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_pneumo.
  $permissions['edit own field_pneumo'] = array(
    'name' => 'edit own field_pneumo',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_reporting_period.
  $permissions['edit own field_reporting_period'] = array(
    'name' => 'edit own field_reporting_period',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_td.
  $permissions['edit own field_td'] = array(
    'name' => 'edit own field_td',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_tdap.
  $permissions['edit own field_tdap'] = array(
    'name' => 'edit own field_tdap',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_total.
  $permissions['edit own field_total'] = array(
    'name' => 'edit own field_total',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_visits.
  $permissions['edit own field_visits'] = array(
    'name' => 'edit own field_visits',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own vaccination_data_from_emr content.
  $permissions['edit own vaccination_data_from_emr content'] = array(
    'name' => 'edit own vaccination_data_from_emr content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: import emr_importer feeds.
  $permissions['import emr_importer feeds'] = array(
    'name' => 'import emr_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: unlock emr_importer feeds.
  $permissions['unlock emr_importer feeds'] = array(
    'name' => 'unlock emr_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: view field_epic_id.
  $permissions['view field_epic_id'] = array(
    'name' => 'view field_epic_id',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_influenza.
  $permissions['view field_influenza'] = array(
    'name' => 'view field_influenza',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_pneumo.
  $permissions['view field_pneumo'] = array(
    'name' => 'view field_pneumo',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_reporting_period.
  $permissions['view field_reporting_period'] = array(
    'name' => 'view field_reporting_period',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_td.
  $permissions['view field_td'] = array(
    'name' => 'view field_td',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_tdap.
  $permissions['view field_tdap'] = array(
    'name' => 'view field_tdap',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_total.
  $permissions['view field_total'] = array(
    'name' => 'view field_total',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_visits.
  $permissions['view field_visits'] = array(
    'name' => 'view field_visits',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_epic_id.
  $permissions['view own field_epic_id'] = array(
    'name' => 'view own field_epic_id',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_influenza.
  $permissions['view own field_influenza'] = array(
    'name' => 'view own field_influenza',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_pneumo.
  $permissions['view own field_pneumo'] = array(
    'name' => 'view own field_pneumo',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_reporting_period.
  $permissions['view own field_reporting_period'] = array(
    'name' => 'view own field_reporting_period',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_td.
  $permissions['view own field_td'] = array(
    'name' => 'view own field_td',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_tdap.
  $permissions['view own field_tdap'] = array(
    'name' => 'view own field_tdap',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_total.
  $permissions['view own field_total'] = array(
    'name' => 'view own field_total',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_visits.
  $permissions['view own field_visits'] = array(
    'name' => 'view own field_visits',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
