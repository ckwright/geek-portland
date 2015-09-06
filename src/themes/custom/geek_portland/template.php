<?php

/**
 * @file
 * Template.php - process theme data for your sub-theme.
 */

/**
 * Implements hook_process_page().
 *
 * For this theme, we're forcing each panel page do create a page title pane and
 * a set of tabs.
 */
function geek_portland_process_page(&$vars) {
  $is_panel_page = isset($vars['theme_hook_suggestions']) && in_array('page__panels', $vars['theme_hook_suggestions']);

  if (drupal_static('node_type')) {
    $vars['title_suffix'] = node_help('', array(
      'node',
      'add',
      drupal_static('node_type'),
    ));
  }
  elseif ($is_panel_page) {
    $vars['title'] = '';
    $vars['primary_local_tasks'] = '';
  }
  if (drupal_static('hide_title')) {
    $vars['title'] = '';
  }
}

/**
 * Implements hook_html_head_alter().
 *
 * Adds a rule that the viewport on the calendar page will always show small.
 */
function geek_portland_html_head_alter(&$head_elements) {
  adaptivetheme_html_head_alter($head_elements);

  $args = arg();
  if ($args[0] == 'events' && !isset($args[1])) {
    $head_elements['adaptivetheme_meta_viewport']['#attributes']['content'] = "width=980";
  }
}

/**
 * Implements template_process_field().
 *
 * Disables the link to "See listing details" (node id = 73).
 */
function geek_portland_preprocess_field(&$vars) {
  $node_id = 73;
  if (isset($vars['element']['#field_name']) && isset($vars['element']['#items'][0]['target_id']) && $vars['element']['#field_name'] == 'field_location' && $vars['element']['#items'][0]['target_id'] == $node_id) {
    $vars['items'] = array();
  }
}
