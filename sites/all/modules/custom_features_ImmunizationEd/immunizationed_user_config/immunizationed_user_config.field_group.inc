<?php
/**
 * @file
 * immunizationed_user_config.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function immunizationed_user_config_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_admin|user|user|form';
  $field_group->group_name = 'group_profile_admin';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile admin',
    'weight' => '13',
    'children' => array(
      0 => 'og_user_node',
      1 => 'googleanalytics',
      2 => 'mimemail',
      3 => 'redirect',
      4 => 'overlay_control',
      5 => 'wysiwyg',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Profile admin',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_profile_admin|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_information|user|user|form';
  $field_group->group_name = 'group_profile_information';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile information',
    'weight' => '0',
    'children' => array(
      0 => 'field_first_names',
      1 => 'field_job_other',
      2 => 'field_last_names',
      3 => 'field_practice_jobs',
      4 => 'field_responsible_role',
      5 => 'field_salutations',
      6 => 'field_visitor',
      7 => 'picture',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_information|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_settings|user|user|form';
  $field_group->group_name = 'group_profile_settings';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile settings',
    'weight' => '10',
    'children' => array(
      0 => 'account',
      1 => 'timezone',
      2 => 'contact',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_settings|user|user|form'] = $field_group;

  return $export;
}
