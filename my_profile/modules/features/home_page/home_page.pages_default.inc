<?php
/**
 * @file
 * home_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function home_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home page';
  $page->admin_description = 'The site\'s home page';
  $page->path = 'home/list';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'List View',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Home',
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
  $handler->name = 'page_home_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home page panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_30_50_20';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
      'three_30_50_20_top' => NULL,
      'three_30_50_20_first' => NULL,
      'three_30_50_20_second' => NULL,
      'three_30_50_20_third' => NULL,
      'three_30_50_20_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Today\'s events';
  $display->uuid = '25e0b02c-eb6f-49be-9c39-54b4dadd1582';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-73dcc91d-d48b-483f-8525-5158a4c72215';
    $pane->panel = 'three_30_50_20_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'featured_content_slideshows-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'type' => 'geek_page',
      ),
      'exposed' => array(
        'sort_by' => 'random',
        'sort_order' => 'DESC',
      ),
      'override_title' => 1,
      'override_title_text' => 'Featured GeekPage',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '15',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '73dcc91d-d48b-483f-8525-5158a4c72215';
    $display->content['new-73dcc91d-d48b-483f-8525-5158a4c72215'] = $pane;
    $display->panels['three_30_50_20_first'][0] = 'new-73dcc91d-d48b-483f-8525-5158a4c72215';
    $pane = new stdClass();
    $pane->pid = 'new-0139a55e-7d7c-433e-8631-a04cdbe5d06d';
    $pane->panel = 'three_30_50_20_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'featured_content_slideshows-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'type' => 'blog_post',
      ),
      'exposed' => array(
        'sort_by' => 'created',
        'sort_order' => 'DESC',
      ),
      'override_title' => 1,
      'override_title_text' => 'Featured GeekNews',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '3600',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0139a55e-7d7c-433e-8631-a04cdbe5d06d';
    $display->content['new-0139a55e-7d7c-433e-8631-a04cdbe5d06d'] = $pane;
    $display->panels['three_30_50_20_first'][1] = 'new-0139a55e-7d7c-433e-8631-a04cdbe5d06d';
    $pane = new stdClass();
    $pane->pid = 'new-80c6579c-e82f-46f3-adcb-fe966b0c74f5';
    $pane->panel = 'three_30_50_20_second';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => 'page-title',
      'override_title' => 0,
      'override_title_text' => 'Today\'s Events',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'page-title',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '80c6579c-e82f-46f3-adcb-fe966b0c74f5';
    $display->content['new-80c6579c-e82f-46f3-adcb-fe966b0c74f5'] = $pane;
    $display->panels['three_30_50_20_second'][0] = 'new-80c6579c-e82f-46f3-adcb-fe966b0c74f5';
    $pane = new stdClass();
    $pane->pid = 'new-cc92b43d-1f23-45e3-90c4-f4704c8fa5cd';
    $pane->panel = 'three_30_50_20_second';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cc92b43d-1f23-45e3-90c4-f4704c8fa5cd';
    $display->content['new-cc92b43d-1f23-45e3-90c4-f4704c8fa5cd'] = $pane;
    $display->panels['three_30_50_20_second'][1] = 'new-cc92b43d-1f23-45e3-90c4-f4704c8fa5cd';
    $pane = new stdClass();
    $pane->pid = 'new-321cf554-5c55-4236-bc29-ed07082aa8dc';
    $pane->panel = 'three_30_50_20_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'event_listing-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'homepage-listing',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '321cf554-5c55-4236-bc29-ed07082aa8dc';
    $display->content['new-321cf554-5c55-4236-bc29-ed07082aa8dc'] = $pane;
    $display->panels['three_30_50_20_second'][2] = 'new-321cf554-5c55-4236-bc29-ed07082aa8dc';
    $pane = new stdClass();
    $pane->pid = 'new-e6614c8e-13f2-4590-af18-53ab2f85fe2b';
    $pane->panel = 'three_30_50_20_third';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Ad space',
      'title' => '',
      'body' => '<p>[[{"fid":"3","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"adspace","field_file_image_title_text[und][0][value]":"adspace"},"type":"media","attributes":{"height":"508","width":"182","alt":"adspace","title":"adspace","class":"media-element file-default"}}]]</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '86400',
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
    $pane->uuid = 'e6614c8e-13f2-4590-af18-53ab2f85fe2b';
    $display->content['new-e6614c8e-13f2-4590-af18-53ab2f85fe2b'] = $pane;
    $display->panels['three_30_50_20_third'][0] = 'new-e6614c8e-13f2-4590-af18-53ab2f85fe2b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page_map';
  $page->task = 'page';
  $page->admin_title = 'Home page map';
  $page->admin_description = 'The site\'s home page';
  $page->path = 'home/map';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Map View',
    'name' => 'main-menu',
    'weight' => '-1',
    'parent' => array(
      'type' => 'tab',
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
  $handler->name = 'page_home_page_map_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home_page_map';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home page panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_30_50_20';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
      'three_30_50_20_top' => NULL,
      'three_30_50_20_first' => NULL,
      'three_30_50_20_second' => NULL,
      'three_30_50_20_third' => NULL,
      'three_30_50_20_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Today\'s events';
  $display->uuid = '9e230b22-8258-449a-a31b-68ce4d80f309';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4c95e985-b541-4b31-9e78-5db57bd87c57';
    $pane->panel = 'three_30_50_20_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'featured_content_slideshows-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'type' => 'geek_page',
      ),
      'exposed' => array(
        'sort_by' => 'random',
        'sort_order' => 'DESC',
      ),
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '15',
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
    $pane->uuid = '4c95e985-b541-4b31-9e78-5db57bd87c57';
    $display->content['new-4c95e985-b541-4b31-9e78-5db57bd87c57'] = $pane;
    $display->panels['three_30_50_20_first'][0] = 'new-4c95e985-b541-4b31-9e78-5db57bd87c57';
    $pane = new stdClass();
    $pane->pid = 'new-34d1165b-26d5-4650-bc32-c629ab60dbf8';
    $pane->panel = 'three_30_50_20_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'featured_content_slideshows-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'type' => 'blog_post',
      ),
      'exposed' => array(
        'sort_by' => 'created',
        'sort_order' => 'DESC',
      ),
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '3600',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '34d1165b-26d5-4650-bc32-c629ab60dbf8';
    $display->content['new-34d1165b-26d5-4650-bc32-c629ab60dbf8'] = $pane;
    $display->panels['three_30_50_20_first'][1] = 'new-34d1165b-26d5-4650-bc32-c629ab60dbf8';
    $pane = new stdClass();
    $pane->pid = 'new-81cf43a5-6ae1-488b-805b-b148a4348345';
    $pane->panel = 'three_30_50_20_second';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => 'page-title',
      'override_title' => 0,
      'override_title_text' => 'Today\'s Events',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'page-title',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '81cf43a5-6ae1-488b-805b-b148a4348345';
    $display->content['new-81cf43a5-6ae1-488b-805b-b148a4348345'] = $pane;
    $display->panels['three_30_50_20_second'][0] = 'new-81cf43a5-6ae1-488b-805b-b148a4348345';
    $pane = new stdClass();
    $pane->pid = 'new-df5f86cb-835c-45f1-addb-63609704ca18';
    $pane->panel = 'three_30_50_20_second';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'df5f86cb-835c-45f1-addb-63609704ca18';
    $display->content['new-df5f86cb-835c-45f1-addb-63609704ca18'] = $pane;
    $display->panels['three_30_50_20_second'][1] = 'new-df5f86cb-835c-45f1-addb-63609704ca18';
    $pane = new stdClass();
    $pane->pid = 'new-e3f9c30f-2bc2-4b54-b0e5-129d724f79a4';
    $pane->panel = 'three_30_50_20_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'event_listing-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'homepage-listing',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e3f9c30f-2bc2-4b54-b0e5-129d724f79a4';
    $display->content['new-e3f9c30f-2bc2-4b54-b0e5-129d724f79a4'] = $pane;
    $display->panels['three_30_50_20_second'][2] = 'new-e3f9c30f-2bc2-4b54-b0e5-129d724f79a4';
    $pane = new stdClass();
    $pane->pid = 'new-f4df62a6-ee27-4ee7-a632-1cfd9c53deaa';
    $pane->panel = 'three_30_50_20_third';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Ad space',
      'title' => '',
      'body' => '<p>[[{"fid":"3","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"adspace","field_file_image_title_text[und][0][value]":"adspace"},"type":"media","attributes":{"height":"508","width":"182","alt":"adspace","title":"adspace","class":"media-element file-default"}}]]</p>',
      'format' => 'full_html',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f4df62a6-ee27-4ee7-a632-1cfd9c53deaa';
    $display->content['new-f4df62a6-ee27-4ee7-a632-1cfd9c53deaa'] = $pane;
    $display->panels['three_30_50_20_third'][0] = 'new-f4df62a6-ee27-4ee7-a632-1cfd9c53deaa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page_map'] = $page;

  return $pages;

}
