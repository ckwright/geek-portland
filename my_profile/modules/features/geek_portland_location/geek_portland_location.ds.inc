<?php
/**
 * @file
 * geek_portland_location.ds.inc
 */

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
