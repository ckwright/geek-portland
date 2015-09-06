<?php
/**
 * @file
 * adaptive_theme_helper.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function adaptive_theme_helper_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all_pages';
  $context->description = 'These blocks appear on all pages';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'os_base-geek_social' => array(
          'module' => 'os_base',
          'delta' => 'geek_social',
          'region' => 'header',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'menu_bar',
          'weight' => '-15',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'menu_bar',
          'weight' => '-14',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('These blocks appear on all pages');
  $export['all_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'is_popup';
  $context->description = 'If the user is on a popup';
  $context->tag = '';
  $context->conditions = array(
    'query_param' => array(
      'values' => array(
        'parameters' => 'a:1:{i:0;a:2:{s:4:"name";s:5:"popup";s:8:"operator";s:3:"set";}}',
        'require_all_params' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'region' => array(
      'geek_portland' => array(
        'disable' => array(
          'header' => 'header',
          'menu_bar' => 'menu_bar',
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'top_menu' => 0,
          'help' => 0,
          'highlighted' => 0,
          'content' => 0,
          'content_aside' => 0,
          'secondary_content' => 0,
          'tertiary_content' => 0,
          'footer' => 0,
          'collapsible' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'three_33_top' => 0,
          'three_33_first' => 0,
          'three_33_second' => 0,
          'three_33_third' => 0,
          'three_33_bottom' => 0,
          'four_first' => 0,
          'four_second' => 0,
          'four_third' => 0,
          'four_fourth' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('If the user is on a popup');
  $export['is_popup'] = $context;

  return $export;
}
