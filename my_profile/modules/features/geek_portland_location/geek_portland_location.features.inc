<?php
/**
 * @file
 * geek_portland_location.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function geek_portland_location_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function geek_portland_location_node_info() {
  $items = array(
    'location' => array(
      'name' => t('Venue'),
      'base' => 'node_content',
      'description' => t('Locations will be geocoded and display a map.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
