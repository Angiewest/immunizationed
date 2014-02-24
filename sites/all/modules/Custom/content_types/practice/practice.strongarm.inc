<?php
/**
 * @file
 * practice.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function practice_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'botcha_enabled_comment_node_practice_group_form';
  $strongarm->value = 1;
  $export['botcha_enabled_comment_node_practice_group_form'] = $strongarm;

  return $export;
}
