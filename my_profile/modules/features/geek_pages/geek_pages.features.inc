<?php
/**
 * @file
 * geek_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function geek_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function geek_pages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function geek_pages_node_info() {
  $items = array(
    'geek_page' => array(
      'name' => t('Geek Page'),
      'base' => 'node_content',
      'description' => t('Geek pages highlight geeky locations around Portland.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
