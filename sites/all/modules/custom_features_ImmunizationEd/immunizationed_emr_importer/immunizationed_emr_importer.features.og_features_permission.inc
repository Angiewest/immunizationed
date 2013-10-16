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

  // Exported og permission: 'node:practice_group:update field_all_flu_eligible_est_visit field'
  $permissions['node:practice_group:update field_all_flu_eligible_est_visit field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_all_flu_eligible_estimated field'
  $permissions['node:practice_group:update field_all_flu_eligible_estimated field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_baseline_indicator field'
  $permissions['node:practice_group:update field_baseline_indicator field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_biweek_number field'
  $permissions['node:practice_group:update field_biweek_number field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_month field'
  $permissions['node:practice_group:update field_month field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_pneumo_eligible_est_visits field'
  $permissions['node:practice_group:update field_pneumo_eligible_est_visits field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_pneumo_eligible_estimated_ field'
  $permissions['node:practice_group:update field_pneumo_eligible_estimated_ field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_quarter field'
  $permissions['node:practice_group:update field_quarter field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_reporting_period_start_biw field'
  $permissions['node:practice_group:update field_reporting_period_start_biw field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_tdap_eligible_estimated_ra field'
  $permissions['node:practice_group:update field_tdap_eligible_estimated_ra field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_tdap_eligible_estimated_vi field'
  $permissions['node:practice_group:update field_tdap_eligible_estimated_vi field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_all_flu_eligible_est_visit field'
  $permissions['node:practice_group:view field_all_flu_eligible_est_visit field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_all_flu_eligible_estimated field'
  $permissions['node:practice_group:view field_all_flu_eligible_estimated field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_baseline_indicator field'
  $permissions['node:practice_group:view field_baseline_indicator field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_biweek_number field'
  $permissions['node:practice_group:view field_biweek_number field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_month field'
  $permissions['node:practice_group:view field_month field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_pneumo_eligible_est_visits field'
  $permissions['node:practice_group:view field_pneumo_eligible_est_visits field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_pneumo_eligible_estimated_ field'
  $permissions['node:practice_group:view field_pneumo_eligible_estimated_ field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_quarter field'
  $permissions['node:practice_group:view field_quarter field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_reporting_period_start_biw field'
  $permissions['node:practice_group:view field_reporting_period_start_biw field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_tdap_eligible_estimated_ra field'
  $permissions['node:practice_group:view field_tdap_eligible_estimated_ra field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_tdap_eligible_estimated_vi field'
  $permissions['node:practice_group:view field_tdap_eligible_estimated_vi field'] = array(
    'roles' => array(),
  );

  return $permissions;
}
