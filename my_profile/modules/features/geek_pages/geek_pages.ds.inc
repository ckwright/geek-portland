<?php
/**
 * @file
 * geek_pages.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function geek_pages_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|geek_page|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'geek_page';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|geek_page|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function geek_pages_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|geek_page|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'geek_page';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'panels-two_25_75';
  $ds_layout->settings = array(
    'regions' => array(
      'two_25_75_top' => array(
        0 => 'field_facebook',
        1 => 'field_twitter',
        2 => 'field_youtube',
        3 => 'title',
        4 => 'field_website',
        5 => 'field_address',
      ),
      'two_25_75_first' => array(
        6 => 'field_image',
      ),
      'two_25_75_second' => array(
        7 => 'body',
        8 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_facebook' => 'two_25_75_top',
      'field_twitter' => 'two_25_75_top',
      'field_youtube' => 'two_25_75_top',
      'title' => 'two_25_75_top',
      'field_website' => 'two_25_75_top',
      'field_address' => 'two_25_75_top',
      'field_image' => 'two_25_75_first',
      'body' => 'two_25_75_second',
      'node_link' => 'two_25_75_second',
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
  $export['node|geek_page|teaser'] = $ds_layout;

  return $export;
}
