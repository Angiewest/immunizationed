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
  $field_group->identifier = 'group_administration|user|user|form';
  $field_group->group_name = 'group_administration';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administration',
    'weight' => '2',
    'children' => array(
      0 => 'googleanalytics',
      1 => 'mimemail',
      2 => 'redirect',
      3 => 'timezone',
      4 => 'overlay_control',
      5 => 'contact',
      6 => 'wysiwyg',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-administration field-group-tabs',
      ),
    ),
  );
  $export['group_administration|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_tab|user|user|form';
  $field_group->group_name = 'group_personal_tab';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_personal';
  $field_group->data = array(
    'label' => 'Personal',
    'weight' => '4',
    'children' => array(
      0 => 'field_first_names',
      1 => 'field_job_other',
      2 => 'field_last_names',
      3 => 'field_practice_jobs',
      4 => 'field_salutations',
      5 => 'picture',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-personal-tab field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_personal_tab|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal|user|user|form';
  $field_group->group_name = 'group_personal';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Account',
    'weight' => '1',
    'children' => array(
      0 => 'group_personal_tab',
      1 => 'group_registration',
      2 => 'group_roles',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Account',
      'instance_settings' => array(
        'classes' => ' group-personal field-group-htabs',
      ),
    ),
  );
  $export['group_personal|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registration|user|user|form';
  $field_group->group_name = 'group_registration';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_personal';
  $field_group->data = array(
    'label' => 'Registration',
    'weight' => '3',
    'children' => array(
      0 => 'og_user_node',
      1 => 'account',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-registration field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_registration|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_roles|user|user|form';
  $field_group->group_name = 'group_roles';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_personal';
  $field_group->data = array(
    'label' => 'Roles',
    'weight' => '5',
    'children' => array(
      0 => 'field_responsible_role',
      1 => 'field_visitor',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-roles field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_roles|user|user|form'] = $field_group;

  return $export;
}
