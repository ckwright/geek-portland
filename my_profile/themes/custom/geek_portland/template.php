<?php

/**
 * @file
 * Template.php - process theme data for your sub-theme.
 *
 * Rename each function and instance of "geek_portland" to match
 * your subthemes name, e.g. if you name your theme "geek_portland" then the function
 * name will be "geek_portland_preprocess_hook". Tip - you can search/replace
 * on "geek_portland".
 */


/**
 * Override or insert variables for the html template.
 */
/* -- Delete this line if you want to use this function
function geek_portland_preprocess_html(&$vars) {
}
function geek_portland_process_html(&$vars) {
}
// */


/**
 * Override or insert variables for the page templates.
 */
/* -- Delete this line if you want to use these functions
function geek_portland_preprocess_page(&$vars) {
}
function geek_portland_process_page(&$vars) {
}
// */


/**
 * Override or insert variables into the node templates.
 */
/* -- Delete this line if you want to use these functions
function geek_portland_preprocess_node(&$vars) {
}
function geek_portland_process_node(&$vars) {
}
// */


/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
function geek_portland_preprocess_comment(&$vars) {
}
function geek_portland_process_comment(&$vars) {
}
// */


/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
function geek_portland_preprocess_block(&$vars) {
}
function geek_portland_process_block(&$vars) {
}
// */

/**
 * Implements hook_process_page().
 *
 * For this theme, we're forcing each panel page do create a page title pane.
 */
function geek_portland_process_page(&$vars) {
  if (isset($vars['theme_hook_suggestions']) && in_array('page__panels', $vars['theme_hook_suggestions'])) {
    $vars['title'] = '';
  }
}
