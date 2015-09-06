<?php
/**
 * @file
 * geek_portland_location.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function geek_portland_location_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|location|location_link';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'location';
  $ds_fieldsetting->view_mode = 'location_link';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|location|location_link'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function geek_portland_location_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|location|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'location';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-one';
  $ds_layout->settings = array(
    'regions' => array(
      'one_main' => array(
        0 => 'field_website',
        1 => 'field_phone',
        2 => 'field_address',
        3 => 'field_gmap',
      ),
    ),
    'fields' => array(
      'field_website' => 'one_main',
      'field_phone' => 'one_main',
      'field_address' => 'one_main',
      'field_gmap' => 'one_main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'one_main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|location|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|location|location_link';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'location';
  $ds_layout->view_mode = 'location_link';
  $ds_layout->layout = 'panels-one';
  $ds_layout->settings = array(
    'regions' => array(
      'one_main' => array(
        0 => 'title',
        1 => 'field_address',
      ),
    ),
    'fields' => array(
      'title' => 'one_main',
      'field_address' => 'one_main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'one_main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|location|location_link'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function geek_portland_location_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'location_link';
  $ds_view_mode->label = 'Location link';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['location_link'] = $ds_view_mode;

  return $export;
}
