<?php
/**
 * @file
 * os_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'event_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'event_listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No events to display.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Content: Dates (field_dates) */
  $handler->display->display_options['relationships']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['relationships']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['relationships']['field_dates_value']['field'] = 'field_dates_value';
  $handler->display->display_options['relationships']['field_dates_value']['label'] = 'All dates';
  $handler->display->display_options['relationships']['field_dates_value']['delta'] = '-1';
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['relationship'] = 'field_dates_value';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = TRUE;
  /* Sort criterion: Field collection item: Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['relationship'] = 'field_dates_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['relationship'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Geeky interests (field_event_category) */
  $handler->display->display_options['filters']['field_event_category_tid']['id'] = 'field_event_category_tid';
  $handler->display->display_options['filters']['field_event_category_tid']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['filters']['field_event_category_tid']['field'] = 'field_event_category_tid';
  $handler->display->display_options['filters']['field_event_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['operator_id'] = 'field_event_category_tid_op';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['label'] = 'Geeky interests';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['operator'] = 'field_event_category_tid_op';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['identifier'] = 'interests';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_category_tid']['group_info']['label'] = 'Geeky interests (field_event_category)';
  $handler->display->display_options['filters']['field_event_category_tid']['group_info']['identifier'] = 'field_event_category_tid';
  $handler->display->display_options['filters']['field_event_category_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_event_category_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_event_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_category_tid']['vocabulary'] = 'event_categories';
  /* Filter criterion: Content: Related Geek Pages (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Related Geek Pages';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'geeks';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Age (field_age) */
  $handler->display->display_options['filters']['field_age_tid']['id'] = 'field_age_tid';
  $handler->display->display_options['filters']['field_age_tid']['table'] = 'field_data_field_age';
  $handler->display->display_options['filters']['field_age_tid']['field'] = 'field_age_tid';
  $handler->display->display_options['filters']['field_age_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_age_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_age_tid']['expose']['operator_id'] = 'field_age_tid_op';
  $handler->display->display_options['filters']['field_age_tid']['expose']['label'] = 'Age';
  $handler->display->display_options['filters']['field_age_tid']['expose']['operator'] = 'field_age_tid_op';
  $handler->display->display_options['filters']['field_age_tid']['expose']['identifier'] = 'age';
  $handler->display->display_options['filters']['field_age_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_age_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_age_tid']['vocabulary'] = 'age';
  /* Filter criterion: Content: Admission (field_admission) */
  $handler->display->display_options['filters']['field_admission_tid']['id'] = 'field_admission_tid';
  $handler->display->display_options['filters']['field_admission_tid']['table'] = 'field_data_field_admission';
  $handler->display->display_options['filters']['field_admission_tid']['field'] = 'field_admission_tid';
  $handler->display->display_options['filters']['field_admission_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_admission_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_admission_tid']['expose']['operator_id'] = 'field_admission_tid_op';
  $handler->display->display_options['filters']['field_admission_tid']['expose']['label'] = 'Cost';
  $handler->display->display_options['filters']['field_admission_tid']['expose']['operator'] = 'field_admission_tid_op';
  $handler->display->display_options['filters']['field_admission_tid']['expose']['identifier'] = 'cost';
  $handler->display->display_options['filters']['field_admission_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_admission_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_admission_tid']['vocabulary'] = 'admission';
  /* Filter criterion: Field collection item: Date (field_event_date:rrule) */
  $handler->display->display_options['filters']['field_event_date_rrule']['id'] = 'field_event_date_rrule';
  $handler->display->display_options['filters']['field_event_date_rrule']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_rrule']['field'] = 'field_event_date_rrule';
  $handler->display->display_options['filters']['field_event_date_rrule']['relationship'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_event_date_rrule']['operator'] = 'not';
  $handler->display->display_options['filters']['field_event_date_rrule']['value'] = 'FREQ=WEEKLY;INTERVAL=1';
  $handler->display->display_options['filters']['field_event_date_rrule']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['operator_id'] = 'field_event_date_rrule_op';
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['label'] = 'Include weekly events?';
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['operator'] = 'field_event_date_rrule_op';
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['identifier'] = 'field_event_date_rrule';
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_rrule']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_rrule']['group_info']['identifier'] = 'weekly';
  $handler->display->display_options['filters']['field_event_date_rrule']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_event_date_rrule']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_event_date_rrule']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Show weekly events',
      'operator' => 'not',
      'value' => 'FREQ=WEEKLY',
    ),
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Upcoming events */
  $handler = $view->new_display('panel_pane', 'Upcoming events', 'panel_pane_upcoming');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Past events */
  $handler = $view->new_display('panel_pane', 'Past events', 'panel_pane_past');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field collection item: Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Field collection item: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['relationship'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';

  /* Display: Calendar */
  $handler = $view->new_display('panel_pane', 'Calendar', 'panel_pane_calendar');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['right'] = 'month basicWeek basicDay';
  $handler->display->display_options['style_options']['timeformat'] = 'h:mmt';
  $handler->display->display_options['style_options']['fields']['title_field'] = 'field_short_title';
  $handler->display->display_options['style_options']['fields']['url_field'] = 'path';
  $handler->display->display_options['style_options']['fields']['title'] = TRUE;
  $handler->display->display_options['style_options']['fields']['url'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['relationship'] = 'field_dates_value';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Short title */
  $handler->display->display_options['fields']['field_short_title']['id'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['table'] = 'field_data_field_short_title';
  $handler->display->display_options['fields']['field_short_title']['field'] = 'field_short_title';
  $handler->display->display_options['fields']['field_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_short_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_short_title']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['relationship'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'last day of last month';
  /* Filter criterion: Content: Geeky interests (field_event_category) */
  $handler->display->display_options['filters']['field_event_category_tid']['id'] = 'field_event_category_tid';
  $handler->display->display_options['filters']['field_event_category_tid']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['filters']['field_event_category_tid']['field'] = 'field_event_category_tid';
  $handler->display->display_options['filters']['field_event_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['operator_id'] = 'field_event_category_tid_op';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['label'] = 'Geeky interests';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['operator'] = 'field_event_category_tid_op';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['identifier'] = 'interests';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_category_tid']['group_info']['label'] = 'Geeky interests (field_event_category)';
  $handler->display->display_options['filters']['field_event_category_tid']['group_info']['identifier'] = 'field_event_category_tid';
  $handler->display->display_options['filters']['field_event_category_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_event_category_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_event_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_category_tid']['vocabulary'] = 'event_categories';
  /* Filter criterion: Content: Related Geek Pages (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Related Geek Pages';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'geeks';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Age (field_age) */
  $handler->display->display_options['filters']['field_age_tid']['id'] = 'field_age_tid';
  $handler->display->display_options['filters']['field_age_tid']['table'] = 'field_data_field_age';
  $handler->display->display_options['filters']['field_age_tid']['field'] = 'field_age_tid';
  $handler->display->display_options['filters']['field_age_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_age_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_age_tid']['expose']['operator_id'] = 'field_age_tid_op';
  $handler->display->display_options['filters']['field_age_tid']['expose']['label'] = 'Age';
  $handler->display->display_options['filters']['field_age_tid']['expose']['operator'] = 'field_age_tid_op';
  $handler->display->display_options['filters']['field_age_tid']['expose']['identifier'] = 'age';
  $handler->display->display_options['filters']['field_age_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_age_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_age_tid']['vocabulary'] = 'age';
  /* Filter criterion: Content: Admission (field_admission) */
  $handler->display->display_options['filters']['field_admission_tid']['id'] = 'field_admission_tid';
  $handler->display->display_options['filters']['field_admission_tid']['table'] = 'field_data_field_admission';
  $handler->display->display_options['filters']['field_admission_tid']['field'] = 'field_admission_tid';
  $handler->display->display_options['filters']['field_admission_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_admission_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_admission_tid']['expose']['operator_id'] = 'field_admission_tid_op';
  $handler->display->display_options['filters']['field_admission_tid']['expose']['label'] = 'Cost';
  $handler->display->display_options['filters']['field_admission_tid']['expose']['operator'] = 'field_admission_tid_op';
  $handler->display->display_options['filters']['field_admission_tid']['expose']['identifier'] = 'cost';
  $handler->display->display_options['filters']['field_admission_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_admission_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_admission_tid']['vocabulary'] = 'admission';
  /* Filter criterion: Field collection item: Date (field_event_date:rrule) */
  $handler->display->display_options['filters']['field_event_date_rrule']['id'] = 'field_event_date_rrule';
  $handler->display->display_options['filters']['field_event_date_rrule']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_rrule']['field'] = 'field_event_date_rrule';
  $handler->display->display_options['filters']['field_event_date_rrule']['relationship'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_event_date_rrule']['operator'] = 'not';
  $handler->display->display_options['filters']['field_event_date_rrule']['value'] = 'FREQ=WEEKLY;INTERVAL=1';
  $handler->display->display_options['filters']['field_event_date_rrule']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['operator_id'] = 'field_event_date_rrule_op';
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['label'] = 'Include weekly events?';
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['operator'] = 'field_event_date_rrule_op';
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['identifier'] = 'field_event_date_rrule';
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_rrule']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_rrule']['group_info']['identifier'] = 'weekly';
  $handler->display->display_options['filters']['field_event_date_rrule']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_event_date_rrule']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_event_date_rrule']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Show weekly events',
      'operator' => 'not',
      'value' => 'FREQ=WEEKLY',
    ),
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_upcoming');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming events';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['relationship'] = 'field_dates_value';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;

  /* Display: Today's events */
  $handler = $view->new_display('panel_pane', 'Today\'s events', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'A list of the events for a given day, grouped by hour';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'blurb';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 1;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['grouping'] = TRUE;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_event_date|field_event_date_value';
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field_function'] = 'home_page_ds_date_view';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'blurb';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no events today. <a href="/add">Submit your own</a> or <a href="/events/list">see what\'s happening later this week</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Field collection item: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value_1']['id'] = 'field_event_date_value_1';
  $handler->display->display_options['filters']['field_event_date_value_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value_1']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value_1']['relationship'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_event_date_value_1']['expose']['operator_id'] = 'field_event_date_value_1_op';
  $handler->display->display_options['filters']['field_event_date_value_1']['expose']['label'] = 'Date -  start date (field_event_date)';
  $handler->display->display_options['filters']['field_event_date_value_1']['expose']['operator'] = 'field_event_date_value_1_op';
  $handler->display->display_options['filters']['field_event_date_value_1']['expose']['identifier'] = 'field_event_date_value_1';
  $handler->display->display_options['filters']['field_event_date_value_1']['default_date'] = '12AM today';
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Today's events map */
  $handler = $view->new_display('panel_pane', 'Today\'s events map', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'geofield_map_map';
  $handler->display->display_options['style_options']['data_source'] = 'field_gmap';
  $handler->display->display_options['style_options']['popup_source'] = 'title';
  $handler->display->display_options['style_options']['geofield_map_width'] = '858px';
  $handler->display->display_options['style_options']['geofield_map_height'] = '475px';
  $handler->display->display_options['style_options']['geofield_map_zoom'] = '11';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_location_target_id']['id'] = 'field_location_target_id';
  $handler->display->display_options['relationships']['field_location_target_id']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_target_id']['field'] = 'field_location_target_id';
  $handler->display->display_options['relationships']['field_location_target_id']['label'] = 'Location';
  $handler->display->display_options['relationships']['field_location_target_id']['required'] = TRUE;
  /* Relationship: Content: Dates (field_dates) */
  $handler->display->display_options['relationships']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['relationships']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['relationships']['field_dates_value']['field'] = 'field_dates_value';
  $handler->display->display_options['relationships']['field_dates_value']['label'] = 'All dates';
  $handler->display->display_options['relationships']['field_dates_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['relationship'] = 'field_dates_value';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Gmap */
  $handler->display->display_options['fields']['field_gmap']['id'] = 'field_gmap';
  $handler->display->display_options['fields']['field_gmap']['table'] = 'field_data_field_gmap';
  $handler->display->display_options['fields']['field_gmap']['field'] = 'field_gmap';
  $handler->display->display_options['fields']['field_gmap']['relationship'] = 'field_location_target_id';
  $handler->display->display_options['fields']['field_gmap']['label'] = '';
  $handler->display->display_options['fields']['field_gmap']['element_type'] = '0';
  $handler->display->display_options['fields']['field_gmap']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gmap']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_gmap']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_gmap']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_gmap']['type'] = 'geofield_map_map';
  $handler->display->display_options['fields']['field_gmap']['settings'] = array(
    'geofield_map_width' => '100%',
    'geofield_map_height' => '300px',
    'geofield_map_zoom' => '8',
    'geofield_map_controltype' => 'default',
    'geofield_map_mtc' => 'standard',
    'geofield_map_pancontrol' => 1,
    'geofield_map_maptype' => 'map',
    'geofield_map_baselayers_map' => 1,
    'geofield_map_baselayers_satellite' => 1,
    'geofield_map_baselayers_hybrid' => 1,
    'geofield_map_baselayers_physical' => 0,
    'geofield_map_scale' => 0,
    'geofield_map_overview' => 0,
    'geofield_map_overview_opened' => 0,
    'geofield_map_scrollwheel' => 0,
    'geofield_map_draggable' => 0,
    'geofield_map_streetview_show' => 0,
  );
  $handler->display->display_options['fields']['field_gmap']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Field collection item: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['relationship'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['relationship'] = 'field_location_target_id';
  $handler->display->display_options['filters']['field_address_locality']['operator'] = '!=';
  /* Filter criterion: Content: Gmap (field_gmap:geom) */
  $handler->display->display_options['filters']['field_gmap_geom']['id'] = 'field_gmap_geom';
  $handler->display->display_options['filters']['field_gmap_geom']['table'] = 'field_data_field_gmap';
  $handler->display->display_options['filters']['field_gmap_geom']['field'] = 'field_gmap_geom';
  $handler->display->display_options['filters']['field_gmap_geom']['relationship'] = 'field_location_target_id';
  $handler->display->display_options['filters']['field_gmap_geom']['operator'] = '!=';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'field_event_date';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['location_field'] = 'field_gmap';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['relationship'] = 'field_dates_value';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Gmap */
  $handler->display->display_options['fields']['field_gmap']['id'] = 'field_gmap';
  $handler->display->display_options['fields']['field_gmap']['table'] = 'field_data_field_gmap';
  $handler->display->display_options['fields']['field_gmap']['field'] = 'field_gmap';
  $handler->display->display_options['fields']['field_gmap']['label'] = '';
  $handler->display->display_options['fields']['field_gmap']['element_type'] = '0';
  $handler->display->display_options['fields']['field_gmap']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gmap']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_gmap']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_gmap']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_gmap']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_gmap']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  $handler->display->display_options['fields']['field_gmap']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['relationship'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'last day of last month';
  $handler->display->display_options['path'] = 'events/ical';

  /* Display: Upcoming events by geekpage */
  $handler = $view->new_display('panel_pane', 'Upcoming events by geekpage', 'panel_pane_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Related Geek Pages (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Weekly events */
  $handler = $view->new_display('panel_pane', 'Weekly events', 'panel_pane_4');
  $handler->display->display_options['display_description'] = 'Events that happen every week';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['relationship'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'this Sunday';
  $handler->display->display_options['filters']['field_event_date_value']['default_to_date'] = 'next Saturday';
  /* Filter criterion: Content: Geeky interests (field_event_category) */
  $handler->display->display_options['filters']['field_event_category_tid']['id'] = 'field_event_category_tid';
  $handler->display->display_options['filters']['field_event_category_tid']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['filters']['field_event_category_tid']['field'] = 'field_event_category_tid';
  $handler->display->display_options['filters']['field_event_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['operator_id'] = 'field_event_category_tid_op';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['label'] = 'Geeky interests';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['operator'] = 'field_event_category_tid_op';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['identifier'] = 'interests';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_category_tid']['group_info']['label'] = 'Geeky interests (field_event_category)';
  $handler->display->display_options['filters']['field_event_category_tid']['group_info']['identifier'] = 'field_event_category_tid';
  $handler->display->display_options['filters']['field_event_category_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_event_category_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_event_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_category_tid']['vocabulary'] = 'event_categories';
  /* Filter criterion: Content: Related Geek Pages (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Related Geek Pages';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'geeks';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Age (field_age) */
  $handler->display->display_options['filters']['field_age_tid']['id'] = 'field_age_tid';
  $handler->display->display_options['filters']['field_age_tid']['table'] = 'field_data_field_age';
  $handler->display->display_options['filters']['field_age_tid']['field'] = 'field_age_tid';
  $handler->display->display_options['filters']['field_age_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_age_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_age_tid']['expose']['operator_id'] = 'field_age_tid_op';
  $handler->display->display_options['filters']['field_age_tid']['expose']['label'] = 'Age';
  $handler->display->display_options['filters']['field_age_tid']['expose']['operator'] = 'field_age_tid_op';
  $handler->display->display_options['filters']['field_age_tid']['expose']['identifier'] = 'age';
  $handler->display->display_options['filters']['field_age_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_age_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_age_tid']['vocabulary'] = 'age';
  /* Filter criterion: Content: Admission (field_admission) */
  $handler->display->display_options['filters']['field_admission_tid']['id'] = 'field_admission_tid';
  $handler->display->display_options['filters']['field_admission_tid']['table'] = 'field_data_field_admission';
  $handler->display->display_options['filters']['field_admission_tid']['field'] = 'field_admission_tid';
  $handler->display->display_options['filters']['field_admission_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_admission_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_admission_tid']['expose']['operator_id'] = 'field_admission_tid_op';
  $handler->display->display_options['filters']['field_admission_tid']['expose']['label'] = 'Cost';
  $handler->display->display_options['filters']['field_admission_tid']['expose']['operator'] = 'field_admission_tid_op';
  $handler->display->display_options['filters']['field_admission_tid']['expose']['identifier'] = 'cost';
  $handler->display->display_options['filters']['field_admission_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_admission_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_admission_tid']['vocabulary'] = 'admission';
  /* Filter criterion: Field collection item: Date (field_event_date:rrule) */
  $handler->display->display_options['filters']['field_event_date_rrule']['id'] = 'field_event_date_rrule';
  $handler->display->display_options['filters']['field_event_date_rrule']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_rrule']['field'] = 'field_event_date_rrule';
  $handler->display->display_options['filters']['field_event_date_rrule']['relationship'] = 'field_dates_value';
  $handler->display->display_options['filters']['field_event_date_rrule']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_event_date_rrule']['value'] = 'FREQ=WEEKLY;INTERVAL=1';
  $handler->display->display_options['filters']['field_event_date_rrule']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['operator_id'] = 'field_event_date_rrule_op';
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['label'] = 'Include weekly events?';
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['operator'] = 'field_event_date_rrule_op';
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['identifier'] = 'field_event_date_rrule';
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_rrule']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_rrule']['group_info']['identifier'] = 'weekly';
  $handler->display->display_options['filters']['field_event_date_rrule']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_event_date_rrule']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_event_date_rrule']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Show weekly events',
      'operator' => 'not',
      'value' => 'FREQ=WEEKLY',
    ),
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $export['event_listing'] = $view;

  $view = new view();
  $view->name = 'events_json';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Events Json';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events Json';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear';
  $handler->display->display_options['pager']['type'] = 'geek_fullcalendar_pager';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = '';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 1;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Relationship: Field collection item: Entity with the Dates (field_dates) */
  $handler->display->display_options['relationships']['field_dates_node']['id'] = 'field_dates_node';
  $handler->display->display_options['relationships']['field_dates_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_dates_node']['field'] = 'field_dates_node';
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = 'start';
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'html5_tools_iso8601',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_dates_node';
  $handler->display->display_options['fields']['path']['label'] = 'url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_dates_node';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  /* Contextual filter: Field collection item: Date -  start date (field_event_date) */
  $handler->display->display_options['arguments']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['arguments']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_event_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_date_value']['granularity'] = 'day';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['relationship'] = 'field_dates_node';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_dates_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Geeky interests (field_event_category) */
  $handler->display->display_options['filters']['field_event_category_tid']['id'] = 'field_event_category_tid';
  $handler->display->display_options['filters']['field_event_category_tid']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['filters']['field_event_category_tid']['field'] = 'field_event_category_tid';
  $handler->display->display_options['filters']['field_event_category_tid']['relationship'] = 'field_dates_node';
  $handler->display->display_options['filters']['field_event_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['operator_id'] = 'field_event_category_tid_op';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['label'] = 'Geeky interests';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['operator'] = 'field_event_category_tid_op';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['identifier'] = 'interests';
  $handler->display->display_options['filters']['field_event_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_category_tid']['vocabulary'] = 'event_categories';
  /* Filter criterion: Content: Related Geek Pages (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['relationship'] = 'field_dates_node';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Related Geek Pages';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'geeks';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Age (field_age) */
  $handler->display->display_options['filters']['field_age_tid']['id'] = 'field_age_tid';
  $handler->display->display_options['filters']['field_age_tid']['table'] = 'field_data_field_age';
  $handler->display->display_options['filters']['field_age_tid']['field'] = 'field_age_tid';
  $handler->display->display_options['filters']['field_age_tid']['relationship'] = 'field_dates_node';
  $handler->display->display_options['filters']['field_age_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_age_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_age_tid']['expose']['operator_id'] = 'field_age_tid_op';
  $handler->display->display_options['filters']['field_age_tid']['expose']['label'] = 'Age';
  $handler->display->display_options['filters']['field_age_tid']['expose']['operator'] = 'field_age_tid_op';
  $handler->display->display_options['filters']['field_age_tid']['expose']['identifier'] = 'age';
  $handler->display->display_options['filters']['field_age_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_age_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_age_tid']['vocabulary'] = 'age';
  /* Filter criterion: Content: Admission (field_admission) */
  $handler->display->display_options['filters']['field_admission_tid']['id'] = 'field_admission_tid';
  $handler->display->display_options['filters']['field_admission_tid']['table'] = 'field_data_field_admission';
  $handler->display->display_options['filters']['field_admission_tid']['field'] = 'field_admission_tid';
  $handler->display->display_options['filters']['field_admission_tid']['relationship'] = 'field_dates_node';
  $handler->display->display_options['filters']['field_admission_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_admission_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_admission_tid']['expose']['operator_id'] = 'field_admission_tid_op';
  $handler->display->display_options['filters']['field_admission_tid']['expose']['label'] = 'Cost';
  $handler->display->display_options['filters']['field_admission_tid']['expose']['operator'] = 'field_admission_tid_op';
  $handler->display->display_options['filters']['field_admission_tid']['expose']['identifier'] = 'cost';
  $handler->display->display_options['filters']['field_admission_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_admission_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_admission_tid']['vocabulary'] = 'admission';
  /* Filter criterion: Field collection item: Date (field_event_date:rrule) */
  $handler->display->display_options['filters']['field_event_date_rrule']['id'] = 'field_event_date_rrule';
  $handler->display->display_options['filters']['field_event_date_rrule']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_rrule']['field'] = 'field_event_date_rrule';
  $handler->display->display_options['filters']['field_event_date_rrule']['operator'] = 'not';
  $handler->display->display_options['filters']['field_event_date_rrule']['value'] = 'FREQ=WEEKLY;INTERVAL=1';
  $handler->display->display_options['filters']['field_event_date_rrule']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['operator_id'] = 'field_event_date_rrule_op';
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['label'] = 'Include weekly events?';
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['operator'] = 'field_event_date_rrule_op';
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['identifier'] = 'field_event_date_rrule';
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_rrule']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_rrule']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_rrule']['group_info']['identifier'] = 'weekly';
  $handler->display->display_options['filters']['field_event_date_rrule']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_event_date_rrule']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_event_date_rrule']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Show weekly events',
      'operator' => 'not',
      'value' => 'FREQ=WEEKLY',
    ),
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['relationship'] = 'field_dates_node';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'panel_pane_calendar');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'events.json';
  $export['events_json'] = $view;

  return $export;
}
