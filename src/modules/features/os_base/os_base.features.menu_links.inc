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
  // Exported menu link: menu-useful-links_add-content:node/add
  $menu_links['menu-useful-links_add-content:node/add'] = array(
    'menu_name' => 'menu-useful-links',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-useful-links_add-content:node/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-useful-links_clear-caches:admin/config/development/performance
  $menu_links['menu-useful-links_clear-caches:admin/config/development/performance'] = array(
    'menu_name' => 'menu-useful-links',
    'link_path' => 'admin/config/development/performance',
    'router_path' => 'admin/config/development/performance',
    'link_title' => 'Clear caches',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-useful-links_clear-caches:admin/config/development/performance',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-useful-links_moderate-content:admin/content
  $menu_links['menu-useful-links_moderate-content:admin/content'] = array(
    'menu_name' => 'menu-useful-links',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Moderate content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-useful-links_moderate-content:admin/content',
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
  t('Add content');
  t('Clear caches');
  t('Contact');
  t('Moderate content');


  return $menu_links;
}
