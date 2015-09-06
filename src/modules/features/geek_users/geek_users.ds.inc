<?php
/**
 * @file
 * geek_users.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function geek_users_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|blurb';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'blurb';
  $ds_fieldsetting->settings = array(
    'name' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_medium_image',
    ),
  );
  $export['user|user|blurb'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function geek_users_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|blurb';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'blurb';
  $ds_layout->layout = 'panels-two_20_80';
  $ds_layout->settings = array(
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
    'regions' => array(
      'two_20_80_top' => array(
        0 => 'name',
      ),
      'two_20_80_first' => array(
        0 => 'ds_user_picture',
      ),
      'two_20_80_second' => array(
        0 => 'field_bio',
      ),
    ),
    'fields' => array(
      'name' => 'two_20_80_top',
      'ds_user_picture' => 'two_20_80_first',
      'field_bio' => 'two_20_80_second',
    ),
  );
  $export['user|user|blurb'] = $ds_layout;

  return $export;
}
