<?php
/**
 * @file
 * immunizationed_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function immunizationed_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-add-content.
  $menus['menu-add-content'] = array(
    'menu_name' => 'menu-add-content',
    'title' => 'Content',
    'description' => 'The <em>Content</em> menu contains links intended for practice admins.',
  );
  // Exported menu: menu-editing.
  $menus['menu-editing'] = array(
    'menu_name' => 'menu-editing',
    'title' => 'Content',
    'description' => 'Menu for site editors',
  );
  // Exported menu: menu-my-practice-admin.
  $menus['menu-my-practice-admin'] = array(
    'menu_name' => 'menu-my-practice-admin',
    'title' => 'Practice Admin',
    'description' => 'Menu for practice adminstration',
  );
  // Exported menu: menu-site-admin.
  $menus['menu-site-admin'] = array(
    'menu_name' => 'menu-site-admin',
    'title' => 'Site admin',
    'description' => 'Menu for site administrators',
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
  t('Content');
  t('Main menu');
  t('Menu for practice adminstration');
  t('Menu for site administrators');
  t('Menu for site editors');
  t('Misc. admin views');
  t('Navigation');
  t('Practice Admin');
  t('Site admin');
  t('The <em>Content</em> menu contains links intended for practice admins.');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');
  t('Views');


  return $menus;
}
