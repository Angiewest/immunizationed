<?php
/**
 * @file
 * immunizationed_emr_importer.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function immunizationed_emr_importer_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_vaccination_data_from_emr';
  $strongarm->value = 0;
  $export['comment_anonymous_vaccination_data_from_emr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_vaccination_data_from_emr';
  $strongarm->value = 1;
  $export['comment_default_mode_vaccination_data_from_emr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_vaccination_data_from_emr';
  $strongarm->value = '50';
  $export['comment_default_per_page_vaccination_data_from_emr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_vaccination_data_from_emr';
  $strongarm->value = 1;
  $export['comment_form_location_vaccination_data_from_emr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_vaccination_data_from_emr';
  $strongarm->value = '1';
  $export['comment_preview_vaccination_data_from_emr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_vaccination_data_from_emr';
  $strongarm->value = 1;
  $export['comment_subject_field_vaccination_data_from_emr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_vaccination_data_from_emr';
  $strongarm->value = '1';
  $export['comment_vaccination_data_from_emr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__vaccination_data_from_emr';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '4',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'feeds' => array(
          'weight' => '0',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__vaccination_data_from_emr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_vaccination_data_from_emr';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_vaccination_data_from_emr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_vaccination_data_from_emr';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_vaccination_data_from_emr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_vaccination_data_from_emr';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_vaccination_data_from_emr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_vaccination_data_from_emr';
  $strongarm->value = '1';
  $export['node_preview_vaccination_data_from_emr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_vaccination_data_from_emr';
  $strongarm->value = 0;
  $export['node_submitted_vaccination_data_from_emr'] = $strongarm;

  return $export;
}
