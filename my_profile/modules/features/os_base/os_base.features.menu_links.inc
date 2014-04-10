<?php
/**
 * @file
 * os_base.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function os_base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu_contact:contact
  $menu_links['menu-footer-menu_contact:contact'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');


  return $menu_links;
}
