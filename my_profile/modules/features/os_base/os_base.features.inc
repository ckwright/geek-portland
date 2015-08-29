<?php
/**
 * @file
 * os_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function os_base_image_default_styles() {
  $styles = array();

  // Exported image style: dynamic_crop.
  $styles['dynamic_crop'] = array(
    'label' => 'Dynamic Crop',
    'effects' => array(
      1 => array(
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => 300,
          'height' => 250,
          'xoffset' => '',
          'yoffset' => '',
          'resizable' => 1,
          'downscaling' => 0,
          'aspect_ratio' => '',
          'disable_if_no_data' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: large_image.
  $styles['large_image'] = array(
    'label' => 'Large Image',
    'effects' => array(
      3 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => 'dynamic_crop',
        ),
        'weight' => 1,
      ),
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => 250,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: medium_image.
  $styles['medium_image'] = array(
    'label' => 'Medium image',
    'effects' => array(
      1 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => 'dynamic_crop',
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 120,
          'height' => 120,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: tiny_image.
  $styles['tiny_image'] = array(
    'label' => 'Tiny image',
    'effects' => array(
      5 => array(
        'name' => 'imagecrop_reuse',
        'data' => array(
          'imagecrop_style' => 'dynamic_crop',
        ),
        'weight' => -10,
      ),
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 75,
          'height' => 65,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: user_icon.
  $styles['user_icon'] = array(
    'label' => 'User icon',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 40,
          'height' => 40,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function os_base_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
