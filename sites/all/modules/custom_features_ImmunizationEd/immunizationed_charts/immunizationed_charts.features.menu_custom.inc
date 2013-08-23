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
  // Exported menu: menu-practice-charts.
  $menus['menu-practice-charts'] = array(
    'menu_name' => 'menu-practice-charts',
    'title' => 'Practice Charts',
    'description' => 'Menu for practice charts',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Charts');
  t('Menu for practice charts');
  t('Menu for vaccination charts');
  t('Practice Charts');


  return $menus;
}
