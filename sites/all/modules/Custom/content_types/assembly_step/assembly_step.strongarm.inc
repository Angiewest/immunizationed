<?php
/**
 * @file
 * assembly_step.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function assembly_step_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_task';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_task'] = $strongarm;

  return $export;
}
