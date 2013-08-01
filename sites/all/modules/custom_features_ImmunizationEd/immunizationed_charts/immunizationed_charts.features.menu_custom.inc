<?php
/**
 * @file
 * immunizationed_charts.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function immunizationed_charts_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-charts.
  $menus['menu-charts'] = array(
    'menu_name' => 'menu-charts',
    'title' => 'Charts',
    'description' => 'Menu for vaccination charts',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Charts');
  t('Menu for vaccination charts');


  return $menus;
}
