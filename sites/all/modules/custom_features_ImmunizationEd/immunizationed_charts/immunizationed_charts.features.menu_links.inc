<?php
/**
 * @file
 * immunizationed_charts.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function immunizationed_charts_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-charts:admin/charts/baseline
  $menu_links['menu-charts:admin/charts/baseline'] = array(
    'menu_name' => 'menu-charts',
    'link_path' => 'admin/charts/baseline',
    'router_path' => 'admin',
    'link_title' => 'Baseline charts - all sites',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Baseline charts - all sites');


  return $menu_links;
}
