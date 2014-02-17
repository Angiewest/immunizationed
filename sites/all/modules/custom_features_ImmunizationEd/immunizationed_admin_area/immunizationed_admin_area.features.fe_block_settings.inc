<?php
/**
 * @file
 * immunizationed_admin_area.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function immunizationed_admin_area_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-charts'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-charts',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'practice-admin',
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
    'visibility' => 1,
  );

  $export['menu-menu-editing'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-editing',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'practice-admin',
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
    'visibility' => 1,
  );

  $export['menu-menu-site-admin'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-site-admin',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'practice-admin',
    'roles' => array(
      'administrator' => 3,
      'apprentice admin' => 8,
      'Co-I admin' => 7,
      'editor' => 4,
    ),
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
    'visibility' => 1,
  );

  return $export;
}
