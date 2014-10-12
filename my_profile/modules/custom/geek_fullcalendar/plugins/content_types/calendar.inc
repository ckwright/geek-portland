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
