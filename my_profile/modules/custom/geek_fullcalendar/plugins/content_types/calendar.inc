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
  $content = array(
    'calendar' => array(
      '#markup' => "<div id='loading'>loading...</div><div id='calendar'></div>",
      '#attached' => array(
        'library' => array(
          array('geek_fullcalendar', 'fullcalendar'),
        ),
        'js' => array(
          drupal_get_path('module', 'geek_fullcalendar') . '/js/geek_fullcalendar.fullcalendar.js',
        ),
      ),
    ),
  );

  // Build the custom content pane.
  $pane = new stdClass();
  $pane->module  = 'geek_fullcalendar';
  $pane->title   = '';
  $pane->content = $content;

  return $pane;
}
