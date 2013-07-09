<?php
/**
 * @file
 * immunizationed_emr_importer.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function immunizationed_emr_importer_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:practice_admin_group:create vaccination_data_from_emr content'
  $permissions['node:practice_admin_group:create vaccination_data_from_emr content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete any vaccination_data_from_emr content'
  $permissions['node:practice_admin_group:delete any vaccination_data_from_emr content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete own vaccination_data_from_emr content'
  $permissions['node:practice_admin_group:delete own vaccination_data_from_emr content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update any vaccination_data_from_emr content'
  $permissions['node:practice_admin_group:update any vaccination_data_from_emr content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update own vaccination_data_from_emr content'
  $permissions['node:practice_admin_group:update own vaccination_data_from_emr content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:create vaccination_data_from_emr content'
  $permissions['node:practice_group:create vaccination_data_from_emr content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:delete any vaccination_data_from_emr content'
  $permissions['node:practice_group:delete any vaccination_data_from_emr content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:delete own vaccination_data_from_emr content'
  $permissions['node:practice_group:delete own vaccination_data_from_emr content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update any vaccination_data_from_emr content'
  $permissions['node:practice_group:update any vaccination_data_from_emr content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_influenza field'
  $permissions['node:practice_group:update field_influenza field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_influenza_vax_rate field'
  $permissions['node:practice_group:update field_influenza_vax_rate field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_pneumo field'
  $permissions['node:practice_group:update field_pneumo field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_pneumo_vax_rate field'
  $permissions['node:practice_group:update field_pneumo_vax_rate field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_practice field'
  $permissions['node:practice_group:update field_practice field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_report_id field'
  $permissions['node:practice_group:update field_report_id field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_reporting_period field'
  $permissions['node:practice_group:update field_reporting_period field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_td field'
  $permissions['node:practice_group:update field_td field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_tdap field'
  $permissions['node:practice_group:update field_tdap field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_tdap_vax_rate field'
  $permissions['node:practice_group:update field_tdap_vax_rate field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_total field'
  $permissions['node:practice_group:update field_total field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_visits field'
  $permissions['node:practice_group:update field_visits field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_week field'
  $permissions['node:practice_group:update field_week field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update own vaccination_data_from_emr content'
  $permissions['node:practice_group:update own vaccination_data_from_emr content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_influenza field'
  $permissions['node:practice_group:view field_influenza field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_influenza_vax_rate field'
  $permissions['node:practice_group:view field_influenza_vax_rate field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_pneumo field'
  $permissions['node:practice_group:view field_pneumo field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_pneumo_vax_rate field'
  $permissions['node:practice_group:view field_pneumo_vax_rate field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_practice field'
  $permissions['node:practice_group:view field_practice field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_report_id field'
  $permissions['node:practice_group:view field_report_id field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_reporting_period field'
  $permissions['node:practice_group:view field_reporting_period field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_td field'
  $permissions['node:practice_group:view field_td field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_tdap field'
  $permissions['node:practice_group:view field_tdap field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_tdap_vax_rate field'
  $permissions['node:practice_group:view field_tdap_vax_rate field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_total field'
  $permissions['node:practice_group:view field_total field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_visits field'
  $permissions['node:practice_group:view field_visits field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_week field'
  $permissions['node:practice_group:view field_week field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
