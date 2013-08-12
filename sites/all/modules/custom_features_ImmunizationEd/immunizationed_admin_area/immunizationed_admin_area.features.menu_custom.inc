<?php
/**
 * @file
 * immunizationed_admin_area.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function immunizationed_admin_area_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-my-practice-admin.
  $menus['menu-my-practice-admin'] = array(
    'menu_name' => 'menu-my-practice-admin',
    'title' => 'Practice Admin',
    'description' => 'Menu for practice adminstration',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu for practice adminstration');
  t('Practice Admin');


  return $menus;
}
