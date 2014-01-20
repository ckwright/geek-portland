<?php

/**
 * @file
 * Adaptive Theme Helper integration for the file_entity module.
 */


/**
 * Implement hook_field_formatter_info().
 *
 * Creates a new formatter for OG entity references.
 */
function adaptive_theme_helper_field_formatter_info() {
  return array(
    'at_list_default' => array(
      'label' => t('Separated OG audience list'),
      'field types' => array('entityreference'),
    ),
    'magnific_slideshow' => array(
      'label' => t('Magnific slideshow'),
      'field types' => array('image'),
      'settings' => array('large_image_style' => '', 'small_image_style' => ''),
    ),
  );
}


/**
 * Implements hook_field_formatter_view().
 *
 * Adds the ability to show a csv og links.
 */
function adaptive_theme_helper_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  if ($display['type'] === 'at_list_default') {
    $display['type'] = 'og_list_default';
    $nodes = og_ui_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display);

    if (!empty($nodes)) {
      foreach ($nodes as $node) {
        $render[] = render($node);
      }

      $output = '';
      $output = implode(', ', $render);
      $element[0] = array('#theme' => 'item_list', '#items' => array($output));
    }
  }
  elseif ($display['type'] === 'magnific_slideshow') {
    $image_style = $display['settings']['large_image_style'];
    foreach ($items as $delta => $item) {
      $uri = array(
        'path' => file_create_url($item['uri']),
        'options' => array(),
      );

      $element[$delta] = array(
        '#theme' => 'image_formatter',
        '#item' => $item,
        '#image_style' => $image_style,
        '#path' => isset($uri) ? $uri : '',
      );

      $image_style = $display['settings']['small_image_style'];
    }
  }

  return $element;
}

/**
 * Implements hook_field_formatter_settings_form().
 */
function adaptive_theme_helper_field_formatter_settings_form($field, $instance, $view_mode, $form, &$form_state) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];

  $image_styles = image_style_options(FALSE, PASS_THROUGH);
  $element['large_image_style'] = array(
    '#title' => t('Image style of the large image'),
    '#type' => 'select',
    '#default_value' => $settings['large_image_style'],
    '#empty_option' => t('None (original image)'),
    '#options' => $image_styles,
  );

  $element['small_image_style'] = array(
    '#title' => t('Image style of the small images'),
    '#type' => 'select',
    '#default_value' => $settings['small_image_style'],
    '#empty_option' => t('None (original image)'),
    '#options' => $image_styles,
  );

  return $element;
}


/**
 * Implements hook_field_formatter_settings_summary().
 */
function adaptive_theme_helper_field_formatter_settings_summary($field, $instance, $view_mode) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];

  $summary = array();

  $image_styles = image_style_options(FALSE, PASS_THROUGH);
  // Unset possible 'No defined styles' option.
  unset($image_styles['']);
  // Styles could be lost because of enabled/disabled modules that defines
  // their styles in code.
  if (isset($image_styles[$settings['large_image_style']])) {
    $summary[] = t('Large image style: @style', array('@style' => $image_styles[$settings['large_image_style']]));
    $summary[] = t('Small image style: @style', array('@style' => $image_styles[$settings['small_image_style']]));
  }
  else {
    $summary[] = t('Original image');
  }

  return implode('<br />', $summary);
}

/**
 * Implements hook_field_attach_view_alter().
 *
 * Hides the default h1 (preserves the meta title) if ds shows the title.
 */
function adaptive_theme_helper_field_attach_view_alter(&$build, $context) {
  if(isset($build['#bundle']) && $context['entity_type'] == 'node' && $context['view_mode'] == 'full') {
    $field_values = ds_get_field_settings($context['entity_type'], $build['#bundle'], $context['view_mode']);

    if(isset($field_values['title'])) {
      drupal_static('hide_title', TRUE);
    }
  }
}