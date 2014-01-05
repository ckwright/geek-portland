<?php
/**
 * @file
 * adaptive_theme_helper.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function adaptive_theme_helper_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_calendar:events
  $menu_links['main-menu_calendar:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Calendar',
    'options' => array(
      'identifier' => 'main-menu_calendar:events',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_geeknews:blog
  $menu_links['main-menu_geeknews:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'GeekNews',
    'options' => array(
      'identifier' => 'main-menu_geeknews:blog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_geekpages:geeks
  $menu_links['main-menu_geekpages:geeks'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'geeks',
    'router_path' => 'geeks',
    'link_title' => 'GeekPages',
    'options' => array(
      'identifier' => 'main-menu_geekpages:geeks',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:home
  $menu_links['main-menu_home:home'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:home',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_submit:add
  $menu_links['main-menu_submit:add'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'add',
    'router_path' => 'add',
    'link_title' => 'Submit',
    'options' => array(
      'attributes' => array(
        'title' => 'Add your own events',
      ),
      'identifier' => 'main-menu_submit:add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_about:node/1
  $menu_links['menu-footer-menu_about:node/1'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_about:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Calendar');
  t('GeekNews');
  t('GeekPages');
  t('Home');
  t('Submit');


  return $menu_links;
}
