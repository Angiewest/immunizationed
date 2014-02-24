<?php
/**
 * @file
 * help_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function help_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_help_manual_page';
  $strongarm->value = 'edit-panelizer';
  $export['additional_settings__active_tab_help_manual_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_help_topic';
  $strongarm->value = 'edit-panelizer';
  $export['additional_settings__active_tab_help_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_help_manual_page';
  $strongarm->value = 0;
  $export['diff_enable_revisions_page_node_help_manual_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_help_topic';
  $strongarm->value = 0;
  $export['diff_enable_revisions_page_node_help_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_help_manual_page';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_help_manual_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_help_topic';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_help_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_help_manual_page';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_help_manual_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_help_topic';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_help_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_help_manual_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_help_manual_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_help_topic_pattern';
  $strongarm->value = '';
  $export['pathauto_node_help_topic_pattern'] = $strongarm;

  return $export;
}
