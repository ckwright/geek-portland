<?php
/**
 * @file
 * geek_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function geek_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'geekpages2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_geek_pages';
  $view->human_name = 'GeekPages2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'blurb';
  /* Sort criterion: Indexed Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_geek_pages';
  $handler->display->display_options['sorts']['title']['field'] = 'title';

  /* Display: All GeekPages */
  $handler = $view->new_display('panel_pane', 'All GeekPages', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Shows all geek pages arranged alphabetically';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['geekpages2'] = $view;

  return $export;
}
