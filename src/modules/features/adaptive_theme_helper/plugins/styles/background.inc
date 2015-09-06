<?php
/**
* @file
* Definition of the 'background' panel style.
*/


/**
* Implementation of hook_panels_style_info().
*/
function adaptive_theme_helper_background_panels_styles() {
  return array(
      'title' => t('Region with background'),
      'description' => t('Display the pane in a background color.'),
      'render region' => 'adaptive_theme_helper_background_style_render_region',
  );
}

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_adaptive_theme_helper_background_style_render_region($vars) {
  $output = '';
  $output = '<div class="pane-region-background">' . implode('<div class="panel-separator"></div>', $vars['panes']) . '</div>';
  return $output;
}
