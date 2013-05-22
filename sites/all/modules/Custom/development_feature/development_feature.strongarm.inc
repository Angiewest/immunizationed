<?php
/**
 * @file
 * development_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function development_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_switch_user_include_anon';
  $strongarm->value = 0;
  $export['devel_switch_user_include_anon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_switch_user_list_size';
  $strongarm->value = '10';
  $export['devel_switch_user_list_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_switch_user_show_form';
  $strongarm->value = 1;
  $export['devel_switch_user_show_form'] = $strongarm;

  return $export;
}
