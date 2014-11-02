<?php
/**
 * @file
 * Defines date-related Views data and plugins:
 *
 * Date navigation attachment range
 *   Navigation that can be attached to any display to create back/next
 *   links by date, requires the date argument and uses the current
 *   date argument default to set a starting point for the view.
 */

/**
 * Implements hook_views_plugins().
 *
 * Adds ability to specify a date range for the pager.
 */
function geek_fullcalendar_views_plugins() {
  $path = drupal_get_path('module', 'geek_fullcalendar');

  return array(
    'pager' => array(
      'geek_fullcalendar_pager' => array(
        'title' => t('Page by date range'),
        'help' => t('Page using the value of a date field.'),
        'help topic' => 'date-views-pager',
        'handler' => 'GeekFullcalendarPluginPager',
        'path' => "$path/includes",
        'uses options' => TRUE,
      ),
    ),
  );
}
