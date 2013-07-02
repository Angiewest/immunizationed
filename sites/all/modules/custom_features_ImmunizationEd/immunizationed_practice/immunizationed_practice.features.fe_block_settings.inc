<?php
/**
 * @file
 * immunizationed_practice.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function immunizationed_practice_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-editing'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-editing',
    'module' => 'menu',
    'node_types' => array(
      0 => 'practice_admin_group',
      1 => 'practice_group',
    ),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'apprentice admin' => 8,
      'editor' => 4,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -15,
      ),
      'energetic' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'energetic',
        'weight' => -17,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-my-practice-admin'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-my-practice-admin',
    'module' => 'menu',
    'node_types' => array(
      0 => 'convenient_vaccination_services',
      1 => 'enhanced_vaccination_systems',
      2 => 'meeting_agenda',
      3 => 'motivation',
      4 => 'patient_notification',
      5 => 'practice_admin_group',
      6 => 'practice_group',
    ),
    'pages' => 'practice-admin',
    'roles' => array(
      'administrator' => 3,
      'apprentice admin' => 8,
      'Co-I admin' => 7,
      'editor' => 4,
      'Group member' => 5,
      'Practice admin' => 6,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -13,
      ),
      'energetic' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'energetic',
        'weight' => -16,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Practice Admin',
    'visibility' => 0,
  );

  $export['menu-menu-site-admin'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-site-admin',
    'module' => 'menu',
    'node_types' => array(
      0 => 'page',
      1 => 'practice_group',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'energetic' => array(
        'region' => 'left',
        'status' => 1,
        'theme' => 'energetic',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
