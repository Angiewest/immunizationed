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

  // Exported menu link: menu-charts_baseline-charts:practice-admin/charts/baseline
  $menu_links['menu-charts_baseline-charts:practice-admin/charts/baseline'] = array(
    'menu_name' => 'menu-charts',
    'link_path' => 'practice-admin/charts/baseline',
    'router_path' => 'practice-admin/charts/%',
    'link_title' => 'Baseline charts',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-charts_baseline-charts:practice-admin/charts/baseline',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-charts_progress-charts:practice-admin/charts/progress
  $menu_links['menu-charts_progress-charts:practice-admin/charts/progress'] = array(
    'menu_name' => 'menu-charts',
    'link_path' => 'practice-admin/charts/progress',
    'router_path' => 'practice-admin/charts/%',
    'link_title' => 'Progress charts',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-charts_progress-charts:practice-admin/charts/progress',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Baseline charts');
  t('Progress charts');


  return $menu_links;
}
