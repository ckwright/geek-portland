<?php
/**
 * @file
 * geek_users.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function geek_users_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about_us';
  $page->task = 'page';
  $page->admin_title = 'About us';
  $page->admin_description = '';
  $page->path = 'about-us';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'About',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
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
  $handler->name = 'page_about_us_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'about_us';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About';
  $display->uuid = 'b23899ea-facc-46bd-a288-79c45cb424f0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ff2370e2-010b-4b50-a4ad-66ffc06b801a';
    $pane->panel = 'one_main';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '1',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = 'ff2370e2-010b-4b50-a4ad-66ffc06b801a';
    $display->content['new-ff2370e2-010b-4b50-a4ad-66ffc06b801a'] = $pane;
    $display->panels['one_main'][0] = 'new-ff2370e2-010b-4b50-a4ad-66ffc06b801a';
    $pane = new stdClass();
    $pane->pid = 'new-dd69f757-ef95-40cc-9ca7-eb507329e7ac';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'about_geek_portland-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'narrow-window',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dd69f757-ef95-40cc-9ca7-eb507329e7ac';
    $display->content['new-dd69f757-ef95-40cc-9ca7-eb507329e7ac'] = $pane;
    $display->panels['one_main'][1] = 'new-dd69f757-ef95-40cc-9ca7-eb507329e7ac';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about_us'] = $page;

  return $pages;

}
