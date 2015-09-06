<?php
/**
 * @file
 * geek_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function geek_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'geek_page_add';
  $page->task = 'page';
  $page->admin_title = 'Geek page: add';
  $page->admin_description = '';
  $page->path = 'add/geek_page';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'or',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add geek page',
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
  $handler->name = 'page_geek_page_add_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'geek_page_add';
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
    'context_admin_options_items' => 'geek_page',
    'context_admin_use_node_edit' => 0,
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'edit own geek_page content',
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
  $handler->name = 'page_geek_page_add_http_response';
  $handler->task = 'page';
  $handler->subtask = 'geek_page_add';
  $handler->handler = 'http_response';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Logged in geek page add',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/geek-page',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'edit own geek_page content',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['geek_page_add'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'geek_pages_landing';
  $page->task = 'page';
  $page->admin_title = 'Geek Pages landing';
  $page->admin_description = 'Landing page for geek pages';
  $page->path = 'geeks';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'GeekPages',
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
  $handler->name = 'page_geek_pages_landing_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'geek_pages_landing';
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
  $display->layout = 'two_50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'two_25_75_top' => NULL,
      'two_25_75_first' => NULL,
      'two_25_75_second' => NULL,
      'two_25_75_bottom' => NULL,
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
    ),
    'two_50_second' => array(
      'style' => 'background',
    ),
  );
  $display->cache = array();
  $display->title = 'GeekPages';
  $display->uuid = '1cb96015-9d93-4413-a510-411b6a65550b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e00fcb33-ffc2-414c-82a5-8941d2bddc87';
    $pane->panel = 'two_50_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'geekpages2-panel_pane_1';
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
    $pane->uuid = 'e00fcb33-ffc2-414c-82a5-8941d2bddc87';
    $display->content['new-e00fcb33-ffc2-414c-82a5-8941d2bddc87'] = $pane;
    $display->panels['two_50_bottom'][0] = 'new-e00fcb33-ffc2-414c-82a5-8941d2bddc87';
    $pane = new stdClass();
    $pane->pid = 'new-396ac6e7-d173-4fc5-a64e-316ac6df3be2';
    $pane->panel = 'two_50_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'How to use Geek pages',
      'title' => 'How to use Geek pages',
      'body' => '<div class="block-content"><div>GeekPages feature Portlanders who are creating geeky content for all to enjoy! Whatever the geeky penchant, you can find tons of great creative contributions made by portland geeks!</div><div>&nbsp;</div><div>Search by single descriptors or combine multiple for more specific results:</div></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '396ac6e7-d173-4fc5-a64e-316ac6df3be2';
    $display->content['new-396ac6e7-d173-4fc5-a64e-316ac6df3be2'] = $pane;
    $display->panels['two_50_first'][0] = 'new-396ac6e7-d173-4fc5-a64e-316ac6df3be2';
    $pane = new stdClass();
    $pane->pid = 'new-23a0d296-fd25-4a78-9d45-77397a189b36';
    $pane->panel = 'two_50_first';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-eZFKxlkwwNefMkRofwp7uwTAkOHfH9Do';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '23a0d296-fd25-4a78-9d45-77397a189b36';
    $display->content['new-23a0d296-fd25-4a78-9d45-77397a189b36'] = $pane;
    $display->panels['two_50_first'][1] = 'new-23a0d296-fd25-4a78-9d45-77397a189b36';
    $pane = new stdClass();
    $pane->pid = 'new-ad254224-22be-490d-9552-c6a936894648';
    $pane->panel = 'two_50_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'geeks',
          ),
          'context' => 'empty',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a class="button" href="/geeks">Clear</a>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '604800',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ad254224-22be-490d-9552-c6a936894648';
    $display->content['new-ad254224-22be-490d-9552-c6a936894648'] = $pane;
    $display->panels['two_50_first'][2] = 'new-ad254224-22be-490d-9552-c6a936894648';
    $pane = new stdClass();
    $pane->pid = 'new-0a3b1911-bedc-4a5b-9af6-8844ec1df960';
    $pane->panel = 'two_50_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'featured_content_slideshows-panel_pane_2';
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
    $pane->uuid = '0a3b1911-bedc-4a5b-9af6-8844ec1df960';
    $display->content['new-0a3b1911-bedc-4a5b-9af6-8844ec1df960'] = $pane;
    $display->panels['two_50_second'][0] = 'new-0a3b1911-bedc-4a5b-9af6-8844ec1df960';
    $pane = new stdClass();
    $pane->pid = 'new-f172d3e1-735d-46ef-8226-9f0fb1864deb';
    $pane->panel = 'two_50_top';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => 'page-title',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '604800',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f172d3e1-735d-46ef-8226-9f0fb1864deb';
    $display->content['new-f172d3e1-735d-46ef-8226-9f0fb1864deb'] = $pane;
    $display->panels['two_50_top'][0] = 'new-f172d3e1-735d-46ef-8226-9f0fb1864deb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['geek_pages_landing'] = $page;

  return $pages;

}
