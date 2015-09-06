<?php
/**
 * @file
 * os_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function os_blog_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog_administer';
  $page->task = 'page';
  $page->admin_title = 'Blog: administer';
  $page->admin_description = 'Blog administration area with Views Bulk Operations options.';
  $page->path = 'blog/admin';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'edit any blog_post content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Administer Blog',
    'name' => 'navigation',
    'weight' => '5',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog_administer_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'blog_administer';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'views_bulk_menu',
    'context_admin_vbo_machine_name' => 'os_blog_administer',
    'context_admin_vbo_views_bulk_node_type' => array(
      'blog_post' => 'blog_post',
      'page' => 0,
      'event' => 0,
    ),
    'context_admin_vbo_views_bulk_published' => 'both',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog_administer'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'os_blog';
  $page->task = 'page';
  $page->admin_title = 'Blog';
  $page->admin_description = '';
  $page->path = 'blog/list';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'GeekNews',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'GeekNews',
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
  $handler->name = 'page_os_blog_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'os_blog';
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
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '69.80153962532818',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'column',
        'width' => '30.198460374671825',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar',
        ),
        'parent' => '1',
        'class' => '',
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
      'one_main' => NULL,
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
      'two_50_bottom' => NULL,
      'two_50_second' => NULL,
    ),
    'two_brick_right_above' => array(
      'style' => 'rounded_corners',
    ),
    'two_50_second' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'GeekNews';
  $display->uuid = '19ac3d75-82b2-4ed7-b69f-d452cb1c382c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6eac4b45-71a0-44ff-afbf-8200e1fbe1b2';
    $pane->panel = 'two_50_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'path' => 'blog.xml',
      'override_title' => 1,
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
    $pane->uuid = '6eac4b45-71a0-44ff-afbf-8200e1fbe1b2';
    $display->content['new-6eac4b45-71a0-44ff-afbf-8200e1fbe1b2'] = $pane;
    $display->panels['two_50_bottom'][0] = 'new-6eac4b45-71a0-44ff-afbf-8200e1fbe1b2';
    $pane = new stdClass();
    $pane->pid = 'new-03411e87-2150-4d6a-a2a6-b110a8d634f1';
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
    $pane->uuid = '03411e87-2150-4d6a-a2a6-b110a8d634f1';
    $display->content['new-03411e87-2150-4d6a-a2a6-b110a8d634f1'] = $pane;
    $display->panels['two_50_first'][0] = 'new-03411e87-2150-4d6a-a2a6-b110a8d634f1';
    $pane = new stdClass();
    $pane->pid = 'new-2c0c9942-e622-4a22-9cac-3c9e7e1dd8ac';
    $pane->panel = 'two_50_second';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-blog-page';
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
    $pane->uuid = '2c0c9942-e622-4a22-9cac-3c9e7e1dd8ac';
    $display->content['new-2c0c9942-e622-4a22-9cac-3c9e7e1dd8ac'] = $pane;
    $display->panels['two_50_second'][0] = 'new-2c0c9942-e622-4a22-9cac-3c9e7e1dd8ac';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6eac4b45-71a0-44ff-afbf-8200e1fbe1b2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['os_blog'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'os_blog_node_add';
  $page->task = 'page';
  $page->admin_title = 'Add a new blog post';
  $page->admin_description = 'Shortcut to create a new blog post.';
  $page->path = 'blog/add';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'create blog_post content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Blog it!',
    'name' => 'navigation',
    'weight' => '4',
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
  $handler->name = 'page_os_blog_node_add_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'os_blog_node_add';
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
    'context_admin_options_items' => 'blog_post',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['os_blog_node_add'] = $page;

  return $pages;

}
