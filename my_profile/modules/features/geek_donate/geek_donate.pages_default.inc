<?php
/**
 * @file
 * geek_donate.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function geek_donate_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'donations_page';
  $page->task = 'page';
  $page->admin_title = 'Donations page';
  $page->admin_description = 'A landing page for donation information';
  $page->path = 'donate';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Donate',
    'name' => 'main-menu',
    'weight' => '-45',
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
  $handler->name = 'page_donations_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'donations_page';
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
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_20_80';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
      'three_33_top' => array(),
      'three_33_third' => array(),
      'three_33_bottom' => array(),
      'default' => NULL,
      'three_33_first' => NULL,
      'three_33_second' => NULL,
      'one_main' => array(
        'corner_location' => 'panel',
      ),
      'two_20_80_top' => array(
        'corner_location' => 'panel',
      ),
      'two_20_80_first' => NULL,
      'two_20_80_second' => NULL,
      'two_20_80_bottom' => NULL,
    ),
    'style' => 'default',
    'three_33_top' => array(
      'style' => 'rounded_corners',
    ),
    'three_33_first' => array(
      'style' => 'naked',
    ),
    'three_33_second' => array(
      'style' => '-1',
    ),
    'three_33_third' => array(
      'style' => 'rounded_corners',
    ),
    'three_33_bottom' => array(
      'style' => 'rounded_corners',
    ),
    'one_main' => array(
      'style' => 'rounded_corners',
    ),
    'two_20_80_top' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = 'Donate now';
  $display->uuid = 'ea487949-c743-4d39-bfcc-22c4021e9f8c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-adaae971-2f20-4c2b-a057-c6ac31994cfb';
    $pane->panel = 'two_20_80_top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Donation text',
      'title' => '',
      'body' => '<p>Love Geek Portland? Want to help keep the site live?</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'adaae971-2f20-4c2b-a057-c6ac31994cfb';
    $display->content['new-adaae971-2f20-4c2b-a057-c6ac31994cfb'] = $pane;
    $display->panels['two_20_80_top'][0] = 'new-adaae971-2f20-4c2b-a057-c6ac31994cfb';
    $pane = new stdClass();
    $pane->pid = 'new-9918f944-449c-421c-b6c5-784a02a339f9';
    $pane->panel = 'two_20_80_top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'donation_types';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9918f944-449c-421c-b6c5-784a02a339f9';
    $display->content['new-9918f944-449c-421c-b6c5-784a02a339f9'] = $pane;
    $display->panels['two_20_80_top'][1] = 'new-9918f944-449c-421c-b6c5-784a02a339f9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['donations_page'] = $page;

  return $pages;

}
