<?php
/**
 * @file
 * os_event.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function os_event_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'events/list';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'List',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Calendar',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'top-right-dropdown',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'two_brick_top' => NULL,
      'two_brick_left_above' => NULL,
      'two_brick_right_above' => NULL,
      'two_brick_middle' => NULL,
      'two_brick_left_below' => NULL,
      'two_brick_right_below' => NULL,
      'two_brick_bottom' => NULL,
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Upcoming Events';
  $display->uuid = '0df87708-e217-4112-be4b-bc1a3be9ccee';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-981cc4ed-dc6b-4621-b30b-86d767523725';
    $pane->panel = 'two_50_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'event_listing-panel_pane_upcoming';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '981cc4ed-dc6b-4621-b30b-86d767523725';
    $display->content['new-981cc4ed-dc6b-4621-b30b-86d767523725'] = $pane;
    $display->panels['two_50_bottom'][0] = 'new-981cc4ed-dc6b-4621-b30b-86d767523725';
    $pane = new stdClass();
    $pane->pid = 'new-6ef29c15-5d0e-434e-a6fd-6cafb86ce0f9';
    $pane->panel = 'two_50_first';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6ef29c15-5d0e-434e-a6fd-6cafb86ce0f9';
    $display->content['new-6ef29c15-5d0e-434e-a6fd-6cafb86ce0f9'] = $pane;
    $display->panels['two_50_first'][0] = 'new-6ef29c15-5d0e-434e-a6fd-6cafb86ce0f9';
    $pane = new stdClass();
    $pane->pid = 'new-fc95b54e-93fb-44c7-921d-e1ca766ddd71';
    $pane->panel = 'two_50_second';
    $pane->type = 'block';
    $pane->subtype = 'views-4ea83464ef7888af6fd9a3b7d9220a02';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fc95b54e-93fb-44c7-921d-e1ca766ddd71';
    $display->content['new-fc95b54e-93fb-44c7-921d-e1ca766ddd71'] = $pane;
    $display->panels['two_50_second'][0] = 'new-fc95b54e-93fb-44c7-921d-e1ca766ddd71';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events_calendar';
  $page->task = 'page';
  $page->admin_title = 'Events: Calendar';
  $page->admin_description = '';
  $page->path = 'events/calendar';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Calendar',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Calendar',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events_calendar_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events_calendar';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Calendar Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'top-right-dropdown',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'two_brick_top' => NULL,
      'two_brick_left_above' => NULL,
      'two_brick_right_above' => array(
        'corner_location' => 'panel',
      ),
      'two_brick_middle' => NULL,
      'two_brick_left_below' => NULL,
      'two_brick_right_below' => NULL,
      'two_brick_bottom' => NULL,
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
    ),
    'two_brick_right_above' => array(
      'style' => 'rounded_corners',
    ),
    'two_50_second' => array(
      'style' => '-1',
    ),
    'two_50_bottom' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Calendar';
  $display->uuid = 'a16499a2-b4b9-42c6-b575-899da7b13d38';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f9e72ae8-1f05-44d3-836d-0abe073bba81';
    $pane->panel = 'two_50_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'event_listing-panel_pane_calendar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f9e72ae8-1f05-44d3-836d-0abe073bba81';
    $display->content['new-f9e72ae8-1f05-44d3-836d-0abe073bba81'] = $pane;
    $display->panels['two_50_bottom'][0] = 'new-f9e72ae8-1f05-44d3-836d-0abe073bba81';
    $pane = new stdClass();
    $pane->pid = 'new-5eb2f60f-20a7-4b5e-b58d-04de18add58d';
    $pane->panel = 'two_50_first';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5eb2f60f-20a7-4b5e-b58d-04de18add58d';
    $display->content['new-5eb2f60f-20a7-4b5e-b58d-04de18add58d'] = $pane;
    $display->panels['two_50_first'][0] = 'new-5eb2f60f-20a7-4b5e-b58d-04de18add58d';
    $pane = new stdClass();
    $pane->pid = 'new-e3f0cd10-1eef-41bb-9da4-a0e8bfbaf17c';
    $pane->panel = 'two_50_second';
    $pane->type = 'block';
    $pane->subtype = 'views-4ea83464ef7888af6fd9a3b7d9220a02';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e3f0cd10-1eef-41bb-9da4-a0e8bfbaf17c';
    $display->content['new-e3f0cd10-1eef-41bb-9da4-a0e8bfbaf17c'] = $pane;
    $display->panels['two_50_second'][0] = 'new-e3f0cd10-1eef-41bb-9da4-a0e8bfbaf17c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f9e72ae8-1f05-44d3-836d-0abe073bba81';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events_calendar'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'os_event_node_add';
  $page->task = 'page';
  $page->admin_title = 'Events: add';
  $page->admin_description = '';
  $page->path = 'add/event';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'or',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Add event',
    'name' => 'navigation',
    'weight' => '84',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Submit',
      'name' => 'menu-footer-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_os_event_node_add_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'os_event_node_add';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'submitted_context' => 'empty',
    'context_admin_options_items' => 'event',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'edit own event content',
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_os_event_node_add_http_response';
  $handler->task = 'page';
  $handler->subtask = 'os_event_node_add';
  $handler->handler = 'http_response';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Logged in user add',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/event',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'edit own event content',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['os_event_node_add'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'weekly_events';
  $page->task = 'page';
  $page->admin_title = 'Weekly events';
  $page->admin_description = '';
  $page->path = 'events/weekly';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Weekly',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'normal',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_weekly_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'weekly_events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'top-right-dropdown',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Weekly Events';
  $display->uuid = '3cb4a4aa-3746-4ab7-ba95-7ea789a72e45';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bba6d4ab-b2c6-4524-98e8-79c55c8d239f';
    $pane->panel = 'two_50_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'event_listing-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bba6d4ab-b2c6-4524-98e8-79c55c8d239f';
    $display->content['new-bba6d4ab-b2c6-4524-98e8-79c55c8d239f'] = $pane;
    $display->panels['two_50_bottom'][0] = 'new-bba6d4ab-b2c6-4524-98e8-79c55c8d239f';
    $pane = new stdClass();
    $pane->pid = 'new-8c2ed727-5109-4b58-8b84-e79147d20f34';
    $pane->panel = 'two_50_first';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8c2ed727-5109-4b58-8b84-e79147d20f34';
    $display->content['new-8c2ed727-5109-4b58-8b84-e79147d20f34'] = $pane;
    $display->panels['two_50_first'][0] = 'new-8c2ed727-5109-4b58-8b84-e79147d20f34';
    $pane = new stdClass();
    $pane->pid = 'new-d041e248-bb7a-4cf2-badb-88ab387bf07f';
    $pane->panel = 'two_50_second';
    $pane->type = 'block';
    $pane->subtype = 'views-4ea83464ef7888af6fd9a3b7d9220a02';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd041e248-bb7a-4cf2-badb-88ab387bf07f';
    $display->content['new-d041e248-bb7a-4cf2-badb-88ab387bf07f'] = $pane;
    $display->panels['two_50_second'][0] = 'new-d041e248-bb7a-4cf2-badb-88ab387bf07f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8c2ed727-5109-4b58-8b84-e79147d20f34';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['weekly_events'] = $page;

  return $pages;

}
