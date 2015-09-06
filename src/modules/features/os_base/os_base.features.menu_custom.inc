<?php
/**
 * @file
 * os_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function os_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-useful-links.
  $menus['menu-useful-links'] = array(
    'menu_name' => 'menu-useful-links',
    'title' => 'Useful links',
    'description' => 'Useful links to show in the dashboard',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Useful links');
  t('Useful links to show in the dashboard');


  return $menus;
}
