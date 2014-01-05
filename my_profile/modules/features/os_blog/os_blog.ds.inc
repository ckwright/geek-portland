<?php
/**
 * @file
 * os_blog.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function os_blog_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog_post|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog_post';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'author',
    ),
  );
  $export['node|blog_post|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function os_blog_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog_post|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog_post';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'panels-two_25_75';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'three_25_50_25_top' => 'div',
      'three_25_50_25_first' => 'div',
      'three_25_50_25_second' => 'div',
      'three_25_50_25_third' => 'div',
      'three_25_50_25_bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'regions' => array(
      'two_25_75_top' => array(
        0 => 'title',
        1 => 'field_blog_category',
        2 => 'author',
      ),
      'two_25_75_first' => array(
        0 => 'field_image',
      ),
      'two_25_75_second' => array(
        0 => 'body',
        1 => 'field_event_category',
        2 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'two_25_75_top',
      'field_blog_category' => 'two_25_75_top',
      'author' => 'two_25_75_top',
      'field_image' => 'two_25_75_first',
      'body' => 'two_25_75_second',
      'field_event_category' => 'two_25_75_second',
      'node_link' => 'two_25_75_second',
    ),
  );
  $export['node|blog_post|teaser'] = $ds_layout;

  return $export;
}
