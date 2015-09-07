<?php

/**
 * @file
 * Adaptive Theme Helper integration for the file_entity module.
 */


/**
 * Implements hook_field_formatter_info().
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
    'ds_taxonomy_separator_sparse' => array(
      'label' => t('Taxonomy, without id=4'),
      'field types' => array('taxonomy_term_reference'),
      'settings'    => array(
        'taxonomy_term_link' => TRUE,
        'taxonomy_term_separator' => ', ',
      ),
    ),
  );
}


/**
 * Implements hook_field_formatter_view().
 *
 * Adds the ability to show a csv og links.
 */
function adaptive_theme_helper_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();
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
  elseif ($display['type'] === 'ds_taxonomy_separator_sparse') {
    $display['type'] = 'ds_taxonomy_separator';
    $element = ds_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display);
    if (isset($element[0]['#markup'])) {
      $element[0]['#markup'] = str_replace('Entrance fee', '', $element[0]['#markup']);
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
  if (isset($build['#bundle']) && $context['entity_type'] == 'node' && $context['view_mode'] == 'full') {
    $field_values = ds_get_field_settings($context['entity_type'], $build['#bundle'], $context['view_mode']);

    if (isset($field_values['title'])) {
      drupal_static('hide_title', TRUE);
    }
  }
}

/**
 * Implements hook_form_BASE_FORM_ID_alter().
 *
 * Tells your template later that this page shows a node/add form via panel's
 * context admin type. Otherwise, we couldn't see the help text each content
 * type supplies under "submission guidelines."
 */
function adaptive_theme_helper_form_context_admin_node_form_wrapper_alter(&$form, &$form_state, $form_id) {
  if (isset($form['#node']->type)) {
    drupal_static('node_type', $form['#node']->type);
  }
}
