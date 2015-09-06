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
  $ds_fieldsetting->id = 'node|blog_post|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog_post';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => 'page-title',
      ),
    ),
    'post_date' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
    'ds_user_picture' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_picture_user_icon',
    ),
    'posted_by' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'author',
    ),
  );
  $export['node|blog_post|default'] = $ds_fieldsetting;

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
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'posted_by' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'author_linked',
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
  $ds_layout->id = 'node|blog_post|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog_post';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-two_25_75';
  $ds_layout->settings = array(
    'regions' => array(
      'two_25_75_top' => array(
        0 => 'title',
        1 => 'ds_user_picture',
        2 => 'posted_by',
        4 => 'post_date',
      ),
      'two_25_75_first' => array(
        5 => 'field_image',
      ),
      'two_25_75_second' => array(
        6 => 'body',
      ),
      'two_25_75_bottom' => array(
        7 => 'og_group_ref',
        8 => 'field_event_category',
      ),
    ),
    'fields' => array(
      'title' => 'two_25_75_top',
      'ds_user_picture' => 'two_25_75_top',
      'posted_by' => 'two_25_75_top',
      'post_date' => 'two_25_75_top',
      'field_image' => 'two_25_75_first',
      'body' => 'two_25_75_second',
      'og_group_ref' => 'two_25_75_bottom',
      'field_event_category' => 'two_25_75_bottom',
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
  $export['node|blog_post|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog_post|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog_post';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'panels-two_25_75';
  $ds_layout->settings = array(
    'regions' => array(
      'two_25_75_top' => array(
        0 => 'title',
        2 => 'posted_by',
      ),
      'two_25_75_first' => array(
        3 => 'field_image',
      ),
      'two_25_75_second' => array(
        4 => 'body',
        5 => 'field_event_category',
        6 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'two_25_75_top',
      'posted_by' => 'two_25_75_top',
      'field_image' => 'two_25_75_first',
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
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|blog_post|teaser'] = $ds_layout;

  return $export;
}
