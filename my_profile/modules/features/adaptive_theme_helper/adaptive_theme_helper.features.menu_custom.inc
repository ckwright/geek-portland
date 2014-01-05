<?php
/**
 * @file
 * adaptive_theme_helper.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function adaptive_theme_helper_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => 'Links to display in the site\'s footer.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu');
  t('Links to display in the site\'s footer.');


  return $menus;
}
