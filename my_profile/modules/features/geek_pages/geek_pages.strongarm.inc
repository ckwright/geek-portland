<?php
/**
 * @file
 * geek_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function geek_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_geek_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_geek_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_geek_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_geek_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_geek_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_geek_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_geek_page';
  $strongarm->value = '1';
  $export['node_preview_geek_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_geek_page';
  $strongarm->value = 1;
  $export['node_submitted_geek_page'] = $strongarm;

  return $export;
}
