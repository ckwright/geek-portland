<?php
/**
 * @file
 * Site Equivalents panel pane plugin.
 */

/**
 * Site Equivalents plugin definition.
 */
$plugin = array(
  'title' => t('Calendar'),
  'category' => t('Geek Portland elements'),
  'description' => t('Creates the basic structure needed for a calendar.'),
);

/**
 * CTools content type output function.
 */
function geek_fullcalendar_calendar_content_type_render($subtype, $conf, $panels_args, $context) {
  drupal_add_js(drupal_get_path('module', 'geek_fullcalendar') . '/js/geek_fullcalendar.fullcalendar.js');
  drupal_add_library('geek_fullcalendar', 'fullcalendar');
  $content = "<div id='loading'>loading...</div><div id='calendar'></div>";
  // Build the custom content pane.
  $pane = new stdClass();
  $pane->module  = 'geek_fullcalendar';
  $pane->title   = '';
  $pane->content = $content;

  return $pane;
}

/**
 * Pane admin form.
 */
function explore_data_graph_form_content_type_edit_form($form, &$form_state) {
  // No additional config.
  return $form;
}

/**
 * Function that returns a form if applicable, otherwise, a view of the entity.
 */
function explore_data_graph_form_show($saved_graph) {
  global $user;
  $contents = '';

  if (isset($saved_graph) && entity_access('update', 'saved_graph', $saved_graph) && $saved_graph->uid == $user->uid) {
    $contents = eck__entity__edit('saved_graph', 'saved_graph', $saved_graph->id);
  }
  elseif (entity_access('create', 'saved_graph', $saved_graph)) {
    $contents = eck__entity__add('saved_graph', 'saved_graph');
  }
  elseif (isset($saved_graph) && entity_access('view', 'saved_graph', $saved_graph)) {
    $contents = entity_view('saved_graph', array($saved_graph), 'teaser');
  }

  return $contents;
}
