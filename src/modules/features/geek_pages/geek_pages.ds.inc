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
  $ds_fieldsetting->id = 'node|geek_page|blurb';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'geek_page';
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
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|geek_page|blurb'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|geek_page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'geek_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => 'page-title',
      ),
    ),
  );
  $export['node|geek_page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|geek_page|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'geek_page';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
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
  $ds_layout->id = 'node|geek_page|blurb';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'geek_page';
  $ds_layout->view_mode = 'blurb';
  $ds_layout->layout = 'panels-two_25_75';
  $ds_layout->settings = array(
    'regions' => array(
      'two_25_75_top' => array(
        0 => 'title',
      ),
      'two_25_75_first' => array(
        1 => 'field_image',
      ),
      'two_25_75_second' => array(
        2 => 'body',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'two_25_75_top',
      'field_image' => 'two_25_75_first',
      'body' => 'two_25_75_second',
      'node_link' => 'two_25_75_second',
    ),
    'limit' => array(
      'field_image' => '1',
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
  $export['node|geek_page|blurb'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|geek_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'geek_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-two_25_75';
  $ds_layout->settings = array(
    'regions' => array(
      'two_25_75_top' => array(
        0 => 'field_twitter',
        1 => 'field_facebook',
        2 => 'field_youtube',
        3 => 'field_podcast_feed',
        4 => 'field_tumblr',
        5 => 'title',
        7 => 'field_website',
        8 => 'field_location',
      ),
      'two_25_75_first' => array(
        6 => 'field_image',
      ),
      'two_25_75_second' => array(
        9 => 'body',
        10 => 'field_upcoming_events',
      ),
      'two_25_75_bottom' => array(
        11 => 'field_all_geeky_interests',
      ),
    ),
    'fields' => array(
      'field_twitter' => 'two_25_75_top',
      'field_facebook' => 'two_25_75_top',
      'field_youtube' => 'two_25_75_top',
      'field_podcast_feed' => 'two_25_75_top',
      'field_tumblr' => 'two_25_75_top',
      'title' => 'two_25_75_top',
      'field_image' => 'two_25_75_first',
      'field_website' => 'two_25_75_top',
      'field_location' => 'two_25_75_top',
      'body' => 'two_25_75_second',
      'field_upcoming_events' => 'two_25_75_second',
      'field_all_geeky_interests' => 'two_25_75_bottom',
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
  $export['node|geek_page|default'] = $ds_layout;

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
        3 => 'field_tumblr',
        4 => 'title',
        5 => 'field_website',
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
      'field_tumblr' => 'two_25_75_top',
      'title' => 'two_25_75_top',
      'field_website' => 'two_25_75_top',
      'field_image' => 'two_25_75_first',
      'body' => 'two_25_75_second',
      'node_link' => 'two_25_75_second',
    ),
    'limit' => array(
      'field_image' => '1',
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
