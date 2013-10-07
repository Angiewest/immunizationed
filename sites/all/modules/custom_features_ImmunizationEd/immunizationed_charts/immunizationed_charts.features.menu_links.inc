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

  // Exported menu link: menu-charts:practice-admin/charts/baseline
  $menu_links['menu-charts:practice-admin/charts/baseline'] = array(
    'menu_name' => 'menu-charts',
    'link_path' => 'practice-admin/charts/baseline',
    'router_path' => 'practice-admin/charts/%',
    'link_title' => 'Baseline charts',
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
  // Exported menu link: menu-practice-charts:http://localhost:29843/admin/structure/menu/item/9079/edit/charts/baseline
  $menu_links['menu-practice-charts:http://localhost:29843/admin/structure/menu/item/9079/edit/charts/baseline'] = array(
    'menu_name' => 'menu-practice-charts',
    'link_path' => 'http://localhost:29843/admin/structure/menu/item/9079/edit/charts/baseline',
    'router_path' => '',
    'link_title' => 'Baseline charts',
    'options' => array(
      'menu_token_link_path' => 'practice/[node:nid]/charts/baseline',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-practice-charts:menutoken/52179f6a92b44
  $menu_links['menu-practice-charts:menutoken/52179f6a92b44'] = array(
    'menu_name' => 'menu-practice-charts',
    'link_path' => 'menutoken/52179f6a92b44',
    'router_path' => 'menutoken/%',
    'link_title' => 'Progress charts',
    'options' => array(
      'attributes' => array(),
      'menu_token_link_path' => 'practice/[node:nid]/charts/progress',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
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
  t('Baseline charts');
  t('Progress charts');


  return $menu_links;
}
