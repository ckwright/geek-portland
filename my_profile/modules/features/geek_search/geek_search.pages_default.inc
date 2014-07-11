<?php
/**
 * @file
 * geek_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function geek_search_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_node_panel_context';
  $handler->task = 'search';
  $handler->subtask = 'node';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Search Results',
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
      'two_brick_top' => NULL,
      'two_brick_left_above' => NULL,
      'two_brick_middle' => NULL,
      'two_brick_left_below' => NULL,
      'two_brick_right_below' => NULL,
      'two_brick_bottom' => NULL,
      'two_brick_right_above' => NULL,
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
    ),
    'two_brick_right_above' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '56524696-35fa-4366-b342-e64da259bdb1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3b522773-6dae-4440-9b7d-aefbfda757cc';
    $pane->panel = 'two_50_bottom';
    $pane->type = 'search_result';
    $pane->subtype = 'search_result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'log' => 1,
      'override_empty' => 0,
      'empty_title' => '',
      'empty' => '',
      'empty_format' => 'plain_text',
      'override_no_key' => 0,
      'no_key_title' => '',
      'no_key' => '',
      'no_key_format' => 'plain_text',
      'context' => 'argument_string_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3b522773-6dae-4440-9b7d-aefbfda757cc';
    $display->content['new-3b522773-6dae-4440-9b7d-aefbfda757cc'] = $pane;
    $display->panels['two_50_bottom'][0] = 'new-3b522773-6dae-4440-9b7d-aefbfda757cc';
    $pane = new stdClass();
    $pane->pid = 'new-3126eecd-b860-4563-9e1d-243c9df8a85f';
    $pane->panel = 'two_50_first';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => 'page-title',
      'override_title' => 0,
      'override_title_text' => '%keywords searched',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '60',
        'granularity' => 'args',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3126eecd-b860-4563-9e1d-243c9df8a85f';
    $display->content['new-3126eecd-b860-4563-9e1d-243c9df8a85f'] = $pane;
    $display->panels['two_50_first'][0] = 'new-3126eecd-b860-4563-9e1d-243c9df8a85f';
    $pane = new stdClass();
    $pane->pid = 'new-d929264a-df66-4f2a-944d-96e4ec26a3ed';
    $pane->panel = 'two_50_second';
    $pane->type = 'search_form';
    $pane->subtype = 'search_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'form' => 'advanced',
      'path_type' => 'default',
      'path' => '',
      'override_prompt' => 1,
      'prompt' => '',
      'context' => 'argument_string_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '60',
        'granularity' => 'args',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'advanced-search',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd929264a-df66-4f2a-944d-96e4ec26a3ed';
    $display->content['new-d929264a-df66-4f2a-944d-96e4ec26a3ed'] = $pane;
    $display->panels['two_50_second'][0] = 'new-d929264a-df66-4f2a-944d-96e4ec26a3ed';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-3b522773-6dae-4440-9b7d-aefbfda757cc';
  $handler->conf['display'] = $display;
  $export['search_node_panel_context'] = $handler;

  return $export;
}
