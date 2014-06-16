<?php
/**
 * @file
 * geek_donate.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function geek_donate_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'donation_types';
  $mini->category = '';
  $mini->admin_title = 'Donation types';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'three_3x33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_33_top' => NULL,
      'three_33_second' => NULL,
      'three_33_third' => NULL,
      'three_33_bottom' => NULL,
      'three_33_first' => NULL,
    ),
    'three_33_first' => array(
      'style' => 'naked',
    ),
    'three_33_second' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a6ec2ef0-53e7-49e5-8ec5-2925e13fc20b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bd1a3212-792a-49b5-bfaa-6ba3f469b81e';
    $pane->panel = 'three_33_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'One Time Donation',
      'title' => 'One Time Donation',
      'body' => '<form action="https://www.paypal.com/cgi-bin/webscr" method="post" target="_top"><p><input type="hidden" name="cmd" value="_s-xclick" /> <input type="hidden" name="hosted_button_id" value="V6JBWPDF9VQR6" /> <input type="image" name="submit" src="https://www.paypalobjects.com/en_US/i/btn/btn_donate_LG.gif" alt="PayPal - The safer, easier way to pay online!" /> <img src="https://www.paypalobjects.com/en_US/i/scr/pixel.gif" alt="" width="1" height="1" border="0" style="border: 0;" /></p></form>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'blue-boxes',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bd1a3212-792a-49b5-bfaa-6ba3f469b81e';
    $display->content['new-bd1a3212-792a-49b5-bfaa-6ba3f469b81e'] = $pane;
    $display->panels['three_33_first'][0] = 'new-bd1a3212-792a-49b5-bfaa-6ba3f469b81e';
    $pane = new stdClass();
    $pane->pid = 'new-8ca9cb69-65a2-4572-bf2d-c948d74aae0d';
    $pane->panel = 'three_33_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Ongoing support',
      'title' => 'Ongoing support',
      'body' => '[[{"fid":"210","view_mode":"teaser","fields":{"format":"teaser","field_file_image_alt_text[und][0][value]":"Support Geek Portland on Patreon","field_file_image_title_text[und][0][value]":"Support Geek Portland on Patreon"},"type":"media","attributes":{"class":"media-element file-teaser"}}]]',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'blue-boxes',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8ca9cb69-65a2-4572-bf2d-c948d74aae0d';
    $display->content['new-8ca9cb69-65a2-4572-bf2d-c948d74aae0d'] = $pane;
    $display->panels['three_33_second'][0] = 'new-8ca9cb69-65a2-4572-bf2d-c948d74aae0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['donation_types'] = $mini;

  return $export;
}
