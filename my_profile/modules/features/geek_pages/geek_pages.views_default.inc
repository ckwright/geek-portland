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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'blurb';
  /* Sort criterion: Indexed Node: Sticky in lists */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'search_api_index_geek_pages';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Indexed Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_geek_pages';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Indexed Node: Geek Page type(s) */
  $handler->display->display_options['filters']['field_geek_page_type_s_']['id'] = 'field_geek_page_type_s_';
  $handler->display->display_options['filters']['field_geek_page_type_s_']['table'] = 'search_api_index_geek_pages';
  $handler->display->display_options['filters']['field_geek_page_type_s_']['field'] = 'field_geek_page_type_s_';
  $handler->display->display_options['filters']['field_geek_page_type_s_']['value'] = array(
    19 => '19',
    20 => '20',
    21 => '21',
    22 => '22',
  );
  $handler->display->display_options['filters']['field_geek_page_type_s_']['expose']['operator_id'] = 'field_geek_page_type_s__op';
  $handler->display->display_options['filters']['field_geek_page_type_s_']['expose']['label'] = 'Geek Page type(s)';
  $handler->display->display_options['filters']['field_geek_page_type_s_']['expose']['operator'] = 'field_geek_page_type_s__op';
  $handler->display->display_options['filters']['field_geek_page_type_s_']['expose']['identifier'] = 'field_geek_page_type_s_';
  $handler->display->display_options['filters']['field_geek_page_type_s_']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_geek_page_type_s_']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_geek_page_type_s_']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_geek_page_type_s_']['group_info']['label'] = 'Geek Page type(s)';
  $handler->display->display_options['filters']['field_geek_page_type_s_']['group_info']['identifier'] = 'field_geek_page_type_s_';
  $handler->display->display_options['filters']['field_geek_page_type_s_']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_geek_page_type_s_']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Indexed Node: Geeky interests */
  $handler->display->display_options['filters']['field_event_category']['id'] = 'field_event_category';
  $handler->display->display_options['filters']['field_event_category']['table'] = 'search_api_index_geek_pages';
  $handler->display->display_options['filters']['field_event_category']['field'] = 'field_event_category';
  $handler->display->display_options['filters']['field_event_category']['value'] = array(
    6 => '6',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    13 => '13',
    14 => '14',
    15 => '15',
    16 => '16',
    17 => '17',
    18 => '18',
  );
  $handler->display->display_options['filters']['field_event_category']['expose']['operator_id'] = 'field_event_category_op';
  $handler->display->display_options['filters']['field_event_category']['expose']['label'] = 'Geeky interests';
  $handler->display->display_options['filters']['field_event_category']['expose']['operator'] = 'field_event_category_op';
  $handler->display->display_options['filters']['field_event_category']['expose']['identifier'] = 'field_event_category';
  $handler->display->display_options['filters']['field_event_category']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_category']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_category']['expose']['reduce'] = 0;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['geekpages2'] = $view;

  return $export;
}
