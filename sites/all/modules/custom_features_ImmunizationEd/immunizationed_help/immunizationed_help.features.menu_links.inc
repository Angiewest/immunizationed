<?php
/**
 * @file
 * immunizationed_help.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function immunizationed_help_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/2290
  $menu_links['main-menu:node/2290'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2290',
    'router_path' => 'node/%',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 50,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Help');


  return $menu_links;
}
