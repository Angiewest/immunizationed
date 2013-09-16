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

  // Exported permission: 'administer panelizer node practice_admin_group defaults'.
  $permissions['administer panelizer node practice_admin_group defaults'] = array(
    'name' => 'administer panelizer node practice_admin_group defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node vaccination_data_from_emr defaults'.
  $permissions['administer panelizer node vaccination_data_from_emr defaults'] = array(
    'name' => 'administer panelizer node vaccination_data_from_emr defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'clear emr_importer feeds'.
  $permissions['clear emr_importer feeds'] = array(
    'name' => 'clear emr_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create field_all_flu_eligible_est_visit'.
  $permissions['create field_all_flu_eligible_est_visit'] = array(
    'name' => 'create field_all_flu_eligible_est_visit',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_all_flu_eligible_estimated'.
  $permissions['create field_all_flu_eligible_estimated'] = array(
    'name' => 'create field_all_flu_eligible_estimated',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_average_age_at_visit'.
  $permissions['create field_average_age_at_visit'] = array(
    'name' => 'create field_average_age_at_visit',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_baseline_indicator'.
  $permissions['create field_baseline_indicator'] = array(
    'name' => 'create field_baseline_indicator',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_biweek_number'.
  $permissions['create field_biweek_number'] = array(
    'name' => 'create field_biweek_number',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_day_of_month'.
  $permissions['create field_day_of_month'] = array(
    'name' => 'create field_day_of_month',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_day_of_year'.
  $permissions['create field_day_of_year'] = array(
    'name' => 'create field_day_of_year',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_epic_id'.
  $permissions['create field_epic_id'] = array(
    'name' => 'create field_epic_id',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_flu_vaccine_indicated_'.
  $permissions['create field_flu_vaccine_indicated_'] = array(
    'name' => 'create field_flu_vaccine_indicated_',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_influenza'.
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

  // Exported permission: 'create field_month'.
  $permissions['create field_month'] = array(
    'name' => 'create field_month',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_pneumo'.
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

  // Exported permission: 'create field_pneumo_eligible_est_visits'.
  $permissions['create field_pneumo_eligible_est_visits'] = array(
    'name' => 'create field_pneumo_eligible_est_visits',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_pneumo_eligible_estimated_'.
  $permissions['create field_pneumo_eligible_estimated_'] = array(
    'name' => 'create field_pneumo_eligible_estimated_',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_pneumo_vaccine_indicated'.
  $permissions['create field_pneumo_vaccine_indicated'] = array(
    'name' => 'create field_pneumo_vaccine_indicated',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_quarter'.
  $permissions['create field_quarter'] = array(
    'name' => 'create field_quarter',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_reporting_period'.
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

  // Exported permission: 'create field_reporting_period_start_biw'.
  $permissions['create field_reporting_period_start_biw'] = array(
    'name' => 'create field_reporting_period_start_biw',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_target_flu_doses'.
  $permissions['create field_target_flu_doses'] = array(
    'name' => 'create field_target_flu_doses',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_target_pneumo_doses'.
  $permissions['create field_target_pneumo_doses'] = array(
    'name' => 'create field_target_pneumo_doses',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_target_tdap_doses'.
  $permissions['create field_target_tdap_doses'] = array(
    'name' => 'create field_target_tdap_doses',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_tdap'.
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

  // Exported permission: 'create field_tdap_eligible_estimated_ra'.
  $permissions['create field_tdap_eligible_estimated_ra'] = array(
    'name' => 'create field_tdap_eligible_estimated_ra',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_tdap_eligible_estimated_vi'.
  $permissions['create field_tdap_eligible_estimated_vi'] = array(
    'name' => 'create field_tdap_eligible_estimated_vi',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_tdap_vaccine_indicated'.
  $permissions['create field_tdap_vaccine_indicated'] = array(
    'name' => 'create field_tdap_vaccine_indicated',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_total'.
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

  // Exported permission: 'create field_visit_date'.
  $permissions['create field_visit_date'] = array(
    'name' => 'create field_visit_date',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_visits'.
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

  // Exported permission: 'create field_year'.
  $permissions['create field_year'] = array(
    'name' => 'create field_year',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create vaccination_data_from_emr content'.
  $permissions['create vaccination_data_from_emr content'] = array(
    'name' => 'create vaccination_data_from_emr content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vaccination_data_from_emr content'.
  $permissions['delete any vaccination_data_from_emr content'] = array(
    'name' => 'delete any vaccination_data_from_emr content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vaccination_data_from_emr content'.
  $permissions['delete own vaccination_data_from_emr content'] = array(
    'name' => 'delete own vaccination_data_from_emr content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any vaccination_data_from_emr content'.
  $permissions['edit any vaccination_data_from_emr content'] = array(
    'name' => 'edit any vaccination_data_from_emr content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_all_flu_eligible_est_visit'.
  $permissions['edit field_all_flu_eligible_est_visit'] = array(
    'name' => 'edit field_all_flu_eligible_est_visit',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_all_flu_eligible_estimated'.
  $permissions['edit field_all_flu_eligible_estimated'] = array(
    'name' => 'edit field_all_flu_eligible_estimated',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_average_age_at_visit'.
  $permissions['edit field_average_age_at_visit'] = array(
    'name' => 'edit field_average_age_at_visit',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_baseline_indicator'.
  $permissions['edit field_baseline_indicator'] = array(
    'name' => 'edit field_baseline_indicator',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_biweek_number'.
  $permissions['edit field_biweek_number'] = array(
    'name' => 'edit field_biweek_number',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_day_of_month'.
  $permissions['edit field_day_of_month'] = array(
    'name' => 'edit field_day_of_month',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_day_of_year'.
  $permissions['edit field_day_of_year'] = array(
    'name' => 'edit field_day_of_year',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_epic_id'.
  $permissions['edit field_epic_id'] = array(
    'name' => 'edit field_epic_id',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_flu_vaccine_indicated_'.
  $permissions['edit field_flu_vaccine_indicated_'] = array(
    'name' => 'edit field_flu_vaccine_indicated_',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_influenza'.
  $permissions['edit field_influenza'] = array(
    'name' => 'edit field_influenza',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_month'.
  $permissions['edit field_month'] = array(
    'name' => 'edit field_month',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_pneumo'.
  $permissions['edit field_pneumo'] = array(
    'name' => 'edit field_pneumo',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_pneumo_eligible_est_visits'.
  $permissions['edit field_pneumo_eligible_est_visits'] = array(
    'name' => 'edit field_pneumo_eligible_est_visits',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_pneumo_eligible_estimated_'.
  $permissions['edit field_pneumo_eligible_estimated_'] = array(
    'name' => 'edit field_pneumo_eligible_estimated_',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_pneumo_vaccine_indicated'.
  $permissions['edit field_pneumo_vaccine_indicated'] = array(
    'name' => 'edit field_pneumo_vaccine_indicated',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_quarter'.
  $permissions['edit field_quarter'] = array(
    'name' => 'edit field_quarter',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_reporting_period'.
  $permissions['edit field_reporting_period'] = array(
    'name' => 'edit field_reporting_period',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_reporting_period_start_biw'.
  $permissions['edit field_reporting_period_start_biw'] = array(
    'name' => 'edit field_reporting_period_start_biw',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_target_flu_doses'.
  $permissions['edit field_target_flu_doses'] = array(
    'name' => 'edit field_target_flu_doses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_target_pneumo_doses'.
  $permissions['edit field_target_pneumo_doses'] = array(
    'name' => 'edit field_target_pneumo_doses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_target_tdap_doses'.
  $permissions['edit field_target_tdap_doses'] = array(
    'name' => 'edit field_target_tdap_doses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_tdap'.
  $permissions['edit field_tdap'] = array(
    'name' => 'edit field_tdap',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_tdap_eligible_estimated_ra'.
  $permissions['edit field_tdap_eligible_estimated_ra'] = array(
    'name' => 'edit field_tdap_eligible_estimated_ra',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_tdap_eligible_estimated_vi'.
  $permissions['edit field_tdap_eligible_estimated_vi'] = array(
    'name' => 'edit field_tdap_eligible_estimated_vi',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_tdap_vaccine_indicated'.
  $permissions['edit field_tdap_vaccine_indicated'] = array(
    'name' => 'edit field_tdap_vaccine_indicated',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_total'.
  $permissions['edit field_total'] = array(
    'name' => 'edit field_total',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_visit_date'.
  $permissions['edit field_visit_date'] = array(
    'name' => 'edit field_visit_date',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_visits'.
  $permissions['edit field_visits'] = array(
    'name' => 'edit field_visits',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_year'.
  $permissions['edit field_year'] = array(
    'name' => 'edit field_year',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_all_flu_eligible_est_visit'.
  $permissions['edit own field_all_flu_eligible_est_visit'] = array(
    'name' => 'edit own field_all_flu_eligible_est_visit',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_all_flu_eligible_estimated'.
  $permissions['edit own field_all_flu_eligible_estimated'] = array(
    'name' => 'edit own field_all_flu_eligible_estimated',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_average_age_at_visit'.
  $permissions['edit own field_average_age_at_visit'] = array(
    'name' => 'edit own field_average_age_at_visit',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_baseline_indicator'.
  $permissions['edit own field_baseline_indicator'] = array(
    'name' => 'edit own field_baseline_indicator',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_biweek_number'.
  $permissions['edit own field_biweek_number'] = array(
    'name' => 'edit own field_biweek_number',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_day_of_month'.
  $permissions['edit own field_day_of_month'] = array(
    'name' => 'edit own field_day_of_month',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_day_of_year'.
  $permissions['edit own field_day_of_year'] = array(
    'name' => 'edit own field_day_of_year',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_epic_id'.
  $permissions['edit own field_epic_id'] = array(
    'name' => 'edit own field_epic_id',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_flu_vaccine_indicated_'.
  $permissions['edit own field_flu_vaccine_indicated_'] = array(
    'name' => 'edit own field_flu_vaccine_indicated_',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_influenza'.
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

  // Exported permission: 'edit own field_month'.
  $permissions['edit own field_month'] = array(
    'name' => 'edit own field_month',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_pneumo'.
  $permissions['edit own field_pneumo'] = array(
    'name' => 'edit own field_pneumo',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_pneumo_eligible_est_visits'.
  $permissions['edit own field_pneumo_eligible_est_visits'] = array(
    'name' => 'edit own field_pneumo_eligible_est_visits',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_pneumo_eligible_estimated_'.
  $permissions['edit own field_pneumo_eligible_estimated_'] = array(
    'name' => 'edit own field_pneumo_eligible_estimated_',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_pneumo_vaccine_indicated'.
  $permissions['edit own field_pneumo_vaccine_indicated'] = array(
    'name' => 'edit own field_pneumo_vaccine_indicated',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_quarter'.
  $permissions['edit own field_quarter'] = array(
    'name' => 'edit own field_quarter',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_reporting_period'.
  $permissions['edit own field_reporting_period'] = array(
    'name' => 'edit own field_reporting_period',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_reporting_period_start_biw'.
  $permissions['edit own field_reporting_period_start_biw'] = array(
    'name' => 'edit own field_reporting_period_start_biw',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_target_flu_doses'.
  $permissions['edit own field_target_flu_doses'] = array(
    'name' => 'edit own field_target_flu_doses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_target_pneumo_doses'.
  $permissions['edit own field_target_pneumo_doses'] = array(
    'name' => 'edit own field_target_pneumo_doses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_target_tdap_doses'.
  $permissions['edit own field_target_tdap_doses'] = array(
    'name' => 'edit own field_target_tdap_doses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_tdap'.
  $permissions['edit own field_tdap'] = array(
    'name' => 'edit own field_tdap',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_tdap_eligible_estimated_ra'.
  $permissions['edit own field_tdap_eligible_estimated_ra'] = array(
    'name' => 'edit own field_tdap_eligible_estimated_ra',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_tdap_eligible_estimated_vi'.
  $permissions['edit own field_tdap_eligible_estimated_vi'] = array(
    'name' => 'edit own field_tdap_eligible_estimated_vi',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_tdap_vaccine_indicated'.
  $permissions['edit own field_tdap_vaccine_indicated'] = array(
    'name' => 'edit own field_tdap_vaccine_indicated',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_total'.
  $permissions['edit own field_total'] = array(
    'name' => 'edit own field_total',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_visit_date'.
  $permissions['edit own field_visit_date'] = array(
    'name' => 'edit own field_visit_date',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_visits'.
  $permissions['edit own field_visits'] = array(
    'name' => 'edit own field_visits',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_year'.
  $permissions['edit own field_year'] = array(
    'name' => 'edit own field_year',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own vaccination_data_from_emr content'.
  $permissions['edit own vaccination_data_from_emr content'] = array(
    'name' => 'edit own vaccination_data_from_emr content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'import emr_importer feeds'.
  $permissions['import emr_importer feeds'] = array(
    'name' => 'import emr_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock emr_importer feeds'.
  $permissions['unlock emr_importer feeds'] = array(
    'name' => 'unlock emr_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'view field_all_flu_eligible_est_visit'.
  $permissions['view field_all_flu_eligible_est_visit'] = array(
    'name' => 'view field_all_flu_eligible_est_visit',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_all_flu_eligible_estimated'.
  $permissions['view field_all_flu_eligible_estimated'] = array(
    'name' => 'view field_all_flu_eligible_estimated',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_average_age_at_visit'.
  $permissions['view field_average_age_at_visit'] = array(
    'name' => 'view field_average_age_at_visit',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_baseline_indicator'.
  $permissions['view field_baseline_indicator'] = array(
    'name' => 'view field_baseline_indicator',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_biweek_number'.
  $permissions['view field_biweek_number'] = array(
    'name' => 'view field_biweek_number',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_day_of_month'.
  $permissions['view field_day_of_month'] = array(
    'name' => 'view field_day_of_month',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_day_of_year'.
  $permissions['view field_day_of_year'] = array(
    'name' => 'view field_day_of_year',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_epic_id'.
  $permissions['view field_epic_id'] = array(
    'name' => 'view field_epic_id',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_flu_vaccine_indicated_'.
  $permissions['view field_flu_vaccine_indicated_'] = array(
    'name' => 'view field_flu_vaccine_indicated_',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_influenza'.
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

  // Exported permission: 'view field_month'.
  $permissions['view field_month'] = array(
    'name' => 'view field_month',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_pneumo'.
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

  // Exported permission: 'view field_pneumo_eligible_est_visits'.
  $permissions['view field_pneumo_eligible_est_visits'] = array(
    'name' => 'view field_pneumo_eligible_est_visits',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_pneumo_eligible_estimated_'.
  $permissions['view field_pneumo_eligible_estimated_'] = array(
    'name' => 'view field_pneumo_eligible_estimated_',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_pneumo_vaccine_indicated'.
  $permissions['view field_pneumo_vaccine_indicated'] = array(
    'name' => 'view field_pneumo_vaccine_indicated',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_quarter'.
  $permissions['view field_quarter'] = array(
    'name' => 'view field_quarter',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_reporting_period'.
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

  // Exported permission: 'view field_reporting_period_start_biw'.
  $permissions['view field_reporting_period_start_biw'] = array(
    'name' => 'view field_reporting_period_start_biw',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_target_flu_doses'.
  $permissions['view field_target_flu_doses'] = array(
    'name' => 'view field_target_flu_doses',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_target_pneumo_doses'.
  $permissions['view field_target_pneumo_doses'] = array(
    'name' => 'view field_target_pneumo_doses',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_target_tdap_doses'.
  $permissions['view field_target_tdap_doses'] = array(
    'name' => 'view field_target_tdap_doses',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_tdap'.
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

  // Exported permission: 'view field_tdap_eligible_estimated_ra'.
  $permissions['view field_tdap_eligible_estimated_ra'] = array(
    'name' => 'view field_tdap_eligible_estimated_ra',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_tdap_eligible_estimated_vi'.
  $permissions['view field_tdap_eligible_estimated_vi'] = array(
    'name' => 'view field_tdap_eligible_estimated_vi',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_tdap_vaccine_indicated'.
  $permissions['view field_tdap_vaccine_indicated'] = array(
    'name' => 'view field_tdap_vaccine_indicated',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_total'.
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

  // Exported permission: 'view field_visit_date'.
  $permissions['view field_visit_date'] = array(
    'name' => 'view field_visit_date',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_visits'.
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

  // Exported permission: 'view field_year'.
  $permissions['view field_year'] = array(
    'name' => 'view field_year',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_all_flu_eligible_est_visit'.
  $permissions['view own field_all_flu_eligible_est_visit'] = array(
    'name' => 'view own field_all_flu_eligible_est_visit',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_all_flu_eligible_estimated'.
  $permissions['view own field_all_flu_eligible_estimated'] = array(
    'name' => 'view own field_all_flu_eligible_estimated',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_average_age_at_visit'.
  $permissions['view own field_average_age_at_visit'] = array(
    'name' => 'view own field_average_age_at_visit',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_baseline_indicator'.
  $permissions['view own field_baseline_indicator'] = array(
    'name' => 'view own field_baseline_indicator',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_biweek_number'.
  $permissions['view own field_biweek_number'] = array(
    'name' => 'view own field_biweek_number',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_day_of_month'.
  $permissions['view own field_day_of_month'] = array(
    'name' => 'view own field_day_of_month',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_day_of_year'.
  $permissions['view own field_day_of_year'] = array(
    'name' => 'view own field_day_of_year',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_epic_id'.
  $permissions['view own field_epic_id'] = array(
    'name' => 'view own field_epic_id',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_flu_vaccine_indicated_'.
  $permissions['view own field_flu_vaccine_indicated_'] = array(
    'name' => 'view own field_flu_vaccine_indicated_',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_influenza'.
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

  // Exported permission: 'view own field_month'.
  $permissions['view own field_month'] = array(
    'name' => 'view own field_month',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_pneumo'.
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

  // Exported permission: 'view own field_pneumo_eligible_est_visits'.
  $permissions['view own field_pneumo_eligible_est_visits'] = array(
    'name' => 'view own field_pneumo_eligible_est_visits',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_pneumo_eligible_estimated_'.
  $permissions['view own field_pneumo_eligible_estimated_'] = array(
    'name' => 'view own field_pneumo_eligible_estimated_',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_pneumo_vaccine_indicated'.
  $permissions['view own field_pneumo_vaccine_indicated'] = array(
    'name' => 'view own field_pneumo_vaccine_indicated',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_quarter'.
  $permissions['view own field_quarter'] = array(
    'name' => 'view own field_quarter',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_reporting_period'.
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

  // Exported permission: 'view own field_reporting_period_start_biw'.
  $permissions['view own field_reporting_period_start_biw'] = array(
    'name' => 'view own field_reporting_period_start_biw',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_target_flu_doses'.
  $permissions['view own field_target_flu_doses'] = array(
    'name' => 'view own field_target_flu_doses',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_target_pneumo_doses'.
  $permissions['view own field_target_pneumo_doses'] = array(
    'name' => 'view own field_target_pneumo_doses',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_target_tdap_doses'.
  $permissions['view own field_target_tdap_doses'] = array(
    'name' => 'view own field_target_tdap_doses',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_tdap'.
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

  // Exported permission: 'view own field_tdap_eligible_estimated_ra'.
  $permissions['view own field_tdap_eligible_estimated_ra'] = array(
    'name' => 'view own field_tdap_eligible_estimated_ra',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_tdap_eligible_estimated_vi'.
  $permissions['view own field_tdap_eligible_estimated_vi'] = array(
    'name' => 'view own field_tdap_eligible_estimated_vi',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_tdap_vaccine_indicated'.
  $permissions['view own field_tdap_vaccine_indicated'] = array(
    'name' => 'view own field_tdap_vaccine_indicated',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_total'.
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

  // Exported permission: 'view own field_visit_date'.
  $permissions['view own field_visit_date'] = array(
    'name' => 'view own field_visit_date',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_visits'.
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

  // Exported permission: 'view own field_year'.
  $permissions['view own field_year'] = array(
    'name' => 'view own field_year',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
