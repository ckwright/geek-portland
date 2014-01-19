<?php
/**
 * @file
 * os_event.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function os_event_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|blurb';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'blurb';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|event|blurb'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|event|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function os_event_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|blurb';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'blurb';
  $ds_layout->layout = 'panels-two_20_80';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'two_25_75_top' => 'div',
      'two_25_75_first' => 'div',
      'two_25_75_second' => 'div',
      'two_25_75_bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'regions' => array(
      'two_20_80_top' => array(
        0 => 'title',
        1 => 'field_location',
        2 => 'field_event_date',
      ),
      'two_20_80_first' => array(
        0 => 'field_image',
      ),
      'two_20_80_second' => array(
        0 => 'body',
        1 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'two_20_80_top',
      'field_location' => 'two_20_80_top',
      'field_event_date' => 'two_20_80_top',
      'field_image' => 'two_20_80_first',
      'body' => 'two_20_80_second',
      'node_link' => 'two_20_80_second',
    ),
  );
  $export['node|event|blurb'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'panels-two_25_75';
  $ds_layout->settings = array(
    'regions' => array(
      'two_25_75_top' => array(
        0 => 'field_buy_tickets',
        1 => 'title',
        2 => 'field_event_date',
        3 => 'field_location',
      ),
      'two_25_75_first' => array(
        4 => 'field_image',
      ),
      'two_25_75_second' => array(
        5 => 'field_admission',
        6 => 'field_age',
        7 => 'body',
        8 => 'field_event_category',
        9 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_buy_tickets' => 'two_25_75_top',
      'title' => 'two_25_75_top',
      'field_event_date' => 'two_25_75_top',
      'field_location' => 'two_25_75_top',
      'field_image' => 'two_25_75_first',
      'field_admission' => 'two_25_75_second',
      'field_age' => 'two_25_75_second',
      'body' => 'two_25_75_second',
      'field_event_category' => 'two_25_75_second',
      'node_link' => 'two_25_75_second',
    ),
    'limit' => array(
      'field_image' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'two_25_75_top' => 'header',
      'two_25_75_first' => 'div',
      'two_25_75_second' => 'div',
      'two_25_75_bottom' => 'footer',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|event|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function os_event_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'blurb';
  $ds_view_mode->label = 'blurb';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['blurb'] = $ds_view_mode;

  return $export;
}
