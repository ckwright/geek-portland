<?php
/**
 * @file
 * Adativetheme implementation to present a Panels layout.
 *
 * Available variables:
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout.
 * - $css_id: unique id if present.
 * - $panel_prefix: prints a wrapper when this template is used in certain
 *   context, such as when rendered by Display Suite or other module - the
 *   wrapper is added by Adaptivetheme in the appropriate process function.
 * - $panel_suffix: closing element for the $prefix.
 *
 * @see adaptivetheme_preprocess_two_25_75()
 * @see adaptivetheme_preprocess_node()
 * @see adaptivetheme_process_node()
 */
$panel_prefix = isset($panel_prefix) ? $panel_prefix : '';
$panel_suffix = isset($panel_suffix) ? $panel_suffix : '';
?>
<?php print $panel_prefix; ?>
<div class="at-panel panel-display two-25-75 clearfix" <?php if (!empty($css_id)): print "id=\"$css_id\""; endif; ?>>
  <?php if ($content['two_25_75_top']): ?>
    <div class="region region-two-25-75-top region-conditional-stack">
      <div class="region-inner clearfix">
        <?php print $content['two_25_75_top']; ?>
      </div>
    </div>
  <?php endif; ?>
  <div class="region region-two-25-75-second region-two-25-75-second-front">
    <div class="region-inner clearfix">
      <?php print $content['two_25_75_front_second']; ?>
    </div>
  </div>
  <div class="region region-two-25-75-first region-two-25-75-first-front">
    <div class="region-inner clearfix">
      <?php print $content['two_25_75_front_first']; ?>
    </div>
  </div>
  <?php if ($content['two_25_75_bottom']): ?>
    <div class="region region-two-25-75-bottom region-conditional-stack">
      <div class="region-inner clearfix">
        <?php print $content['two_25_75_bottom']; ?>
      </div>
    </div>
  <?php endif; ?>
</div>
<?php print $panel_suffix; ?>
