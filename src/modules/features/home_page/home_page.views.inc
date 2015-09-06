<?php
/**
 * @file
 * Code for the Home Page views.
 */

/**
 * Implements hook_views_query_alter().
 *
 * Limits results to the most 3 recent blog posts.
 */
function home_page_views_query_alter(&$view, &$query) {
  if ($view->name == 'featured_content_slideshows' && $view->current_display == 'panel_pane_3') {
    $query->add_where_expression('AND', "node.created > (SELECT node.created AS created
      FROM
      node node
      WHERE  (type = 'blog_post')
      ORDER BY created DESC
      LIMIT 1 OFFSET 3)");
  }
}