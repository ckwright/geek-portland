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
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|event|blurb'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ical_link' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'map_link' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|event|default'] = $ds_fieldsetting;

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
    'regions' => array(
      'two_20_80_top' => array(
        0 => 'title',
        1 => 'field_location',
        2 => 'field_dates',
      ),
      'two_20_80_first' => array(
        3 => 'field_image',
      ),
      'two_20_80_second' => array(
        4 => 'body',
        5 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'two_20_80_top',
      'field_location' => 'two_20_80_top',
      'field_dates' => 'two_20_80_top',
      'field_image' => 'two_20_80_first',
      'body' => 'two_20_80_second',
      'node_link' => 'two_20_80_second',
    ),
    'limit' => array(
      'field_dates' => 'delta',
      'field_image' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'two_20_80_top' => 'div',
      'two_20_80_first' => 'div',
      'two_20_80_second' => 'div',
      'two_20_80_bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|event|blurb'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-two_25_75';
  $ds_layout->settings = array(
    'regions' => array(
      'two_25_75_top' => array(
        0 => 'field_buy_tickets',
        1 => 'title',
        2 => 'field_dates',
        3 => 'field_location',
        4 => 'field_admission',
        5 => 'field_entrance_fee',
        6 => 'field_age',
      ),
      'two_25_75_first' => array(
        7 => 'field_image',
      ),
      'two_25_75_second' => array(
        8 => 'body',
      ),
      'two_25_75_bottom' => array(
        9 => 'field_event_category',
        10 => 'field_more_info',
        11 => 'map_link',
        12 => 'ical_link',
      ),
    ),
    'fields' => array(
      'field_buy_tickets' => 'two_25_75_top',
      'title' => 'two_25_75_top',
      'field_dates' => 'two_25_75_top',
      'field_location' => 'two_25_75_top',
      'field_admission' => 'two_25_75_top',
      'field_entrance_fee' => 'two_25_75_top',
      'field_age' => 'two_25_75_top',
      'field_image' => 'two_25_75_first',
      'body' => 'two_25_75_second',
      'field_event_category' => 'two_25_75_bottom',
      'field_more_info' => 'two_25_75_bottom',
      'map_link' => 'two_25_75_bottom',
      'ical_link' => 'two_25_75_bottom',
    ),
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
  );
  $export['node|event|default'] = $ds_layout;

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
        2 => 'field_dates',
        3 => 'field_admission',
        4 => 'field_entrance_fee',
        5 => 'field_age',
      ),
      'two_25_75_first' => array(
        6 => 'field_image',
      ),
      'two_25_75_second' => array(
        7 => 'body',
        8 => 'field_event_category',
        9 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_buy_tickets' => 'two_25_75_top',
      'title' => 'two_25_75_top',
      'field_dates' => 'two_25_75_top',
      'field_admission' => 'two_25_75_top',
      'field_entrance_fee' => 'two_25_75_top',
      'field_age' => 'two_25_75_top',
      'field_image' => 'two_25_75_first',
      'body' => 'two_25_75_second',
      'field_event_category' => 'two_25_75_second',
      'node_link' => 'two_25_75_second',
    ),
    'limit' => array(
      'field_dates' => 'delta',
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
    'user' => 'user',
  );
  $export['blurb'] = $ds_view_mode;

  return $export;
}
