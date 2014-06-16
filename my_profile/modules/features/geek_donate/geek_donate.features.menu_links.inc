<?php
/**
 * @file
 * geek_donate.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function geek_donate_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_donate:donate
  $menu_links['main-menu_donate:donate'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'donate',
    'router_path' => 'donate',
    'link_title' => 'Donate',
    'options' => array(
      'identifier' => 'main-menu_donate:donate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Donate');


  return $menu_links;
}
