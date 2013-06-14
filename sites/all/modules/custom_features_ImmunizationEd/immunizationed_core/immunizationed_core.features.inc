<?php
/**
 * @file
 * immunizationed_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function immunizationed_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_type") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels" && $api == "pipelines") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function immunizationed_core_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_profile_export_fields().
 */
function immunizationed_core_fe_profile_export_fields() {
  $items = array(
    'profile_architect' => array(
      'fid' => 4,
      'title' => 'Architect',
      'name' => 'profile_architect',
      'explanation' => 'This role identifies the lead physician for the immunization program.',
      'category' => 'Special practice role',
      'page' => 'Architects',
      'type' => 'checkbox',
      'weight' => 0,
      'required' => 0,
      'register' => 0,
      'visibility' => 4,
      'autocomplete' => 0,
      'options' => '',
    ),
    'profile_first_name' => array(
      'fid' => 5,
      'title' => 'First name',
      'name' => 'profile_first_name',
      'explanation' => '',
      'category' => 'Personal information',
      'page' => '',
      'type' => 'textfield',
      'weight' => -9,
      'required' => 0,
      'register' => 0,
      'visibility' => 4,
      'autocomplete' => 0,
      'options' => '',
    ),
    'profile_foreman' => array(
      'fid' => 8,
      'title' => 'Foreman',
      'name' => 'profile_foreman',
      'explanation' => 'This role identifies the lead nurse for the immunization program.',
      'category' => 'Special practice role',
      'page' => 'Foremen',
      'type' => 'checkbox',
      'weight' => 0,
      'required' => 0,
      'register' => 0,
      'visibility' => 4,
      'autocomplete' => 0,
      'options' => '',
    ),
    'profile_job_other' => array(
      'fid' => 3,
      'title' => 'Job-other',
      'name' => 'profile_job_other',
      'explanation' => 'enter your job at this practice if yours is not listed',
      'category' => 'Practice job',
      'page' => '',
      'type' => 'list',
      'weight' => -8,
      'required' => 0,
      'register' => 0,
      'visibility' => 4,
      'autocomplete' => 0,
      'options' => '',
    ),
    'profile_last_name' => array(
      'fid' => 6,
      'title' => 'Last name',
      'name' => 'profile_last_name',
      'explanation' => '',
      'category' => 'Personal information',
      'page' => '',
      'type' => 'textfield',
      'weight' => -8,
      'required' => 0,
      'register' => 0,
      'visibility' => 4,
      'autocomplete' => 0,
      'options' => '',
    ),
    'profile_manager' => array(
      'fid' => 9,
      'title' => 'Manager',
      'name' => 'profile_manager',
      'explanation' => 'This role identifies the lead administrator for the immunization program.',
      'category' => 'Special practice role',
      'page' => 'Managers',
      'type' => 'checkbox',
      'weight' => 0,
      'required' => 0,
      'register' => 0,
      'visibility' => 4,
      'autocomplete' => 0,
      'options' => '',
    ),
    'profile_practice_job' => array(
      'fid' => 2,
      'title' => 'Practice job',
      'name' => 'profile_practice_job',
      'explanation' => 'Please select your job at this practice',
      'category' => 'Practice job',
      'page' => 'Practice Jobs',
      'type' => 'selection',
      'weight' => -9,
      'required' => 0,
      'register' => 0,
      'visibility' => 4,
      'autocomplete' => 0,
      'options' => 'Administrator
Billing
Front desk
Laboratory
Medical assistant
Medical Records
Nurse
Pharmacist
Physician
Referrals
Registration
Transcription
X-ray',
    ),
    'profile_project_manager' => array(
      'fid' => 10,
      'title' => 'Project manager',
      'name' => 'profile_project_manager',
      'explanation' => 'This role identifies the practice champion for the immunization program.',
      'category' => 'Special practice role',
      'page' => 'Project managers',
      'type' => 'checkbox',
      'weight' => 0,
      'required' => 0,
      'register' => 0,
      'visibility' => 4,
      'autocomplete' => 0,
      'options' => '',
    ),
    'profile_salutation' => array(
      'fid' => 7,
      'title' => 'Salutation',
      'name' => 'profile_salutation',
      'explanation' => '',
      'category' => 'Personal information',
      'page' => '',
      'type' => 'selection',
      'weight' => -10,
      'required' => 0,
      'register' => 0,
      'visibility' => 4,
      'autocomplete' => 0,
      'options' => 'Dr
Ms
Mr',
    ),
    'profile_visitor' => array(
      'fid' => 11,
      'title' => 'Just a visitor',
      'name' => 'profile_visitor',
      'explanation' => 'Tick this box if you are not a member of any practice and are just here to observe the construction crews.',
      'category' => 'Practice job',
      'page' => 'Just visitors',
      'type' => 'checkbox',
      'weight' => -10,
      'required' => 0,
      'register' => 0,
      'visibility' => 4,
      'autocomplete' => 0,
      'options' => '',
    ),
  );
  return $items;
}
