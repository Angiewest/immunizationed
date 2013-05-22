<?php
/**
 * @file
 * immunizationed_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function immunizationed_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-editing.
  $menus['menu-editing'] = array(
    'menu_name' => 'menu-editing',
    'title' => 'Editor menu',
    'description' => 'Menu for site editors',
  );
  // Exported menu: menu-my-practice-admin.
  $menus['menu-my-practice-admin'] = array(
    'menu_name' => 'menu-my-practice-admin',
    'title' => 'Practice Admin',
    'description' => 'Menu for practice adminstration',
  );
  // Exported menu: menu-practice-managment.
  $menus['menu-practice-managment'] = array(
    'menu_name' => 'menu-practice-managment',
    'title' => 'Practice Managment',
    'description' => 'practice management tasks',
  );
  // Exported menu: menu-views.
  $menus['menu-views'] = array(
    'menu_name' => 'menu-views',
    'title' => 'Views',
    'description' => 'Misc. admin views',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Editor menu');
  t('Features');
  t('Main menu');
  t('Menu for practice adminstration');
  t('Menu for site editors');
  t('Menu items for any enabled features.');
  t('Misc. admin views');
  t('Navigation');
  t('Practice Admin');
  t('Practice Managment');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');
  t('Views');
  t('practice management tasks');


  return $menus;
}
