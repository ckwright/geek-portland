<?php
/**
 * @file
 * Pulled from Adativetheme region.tpl.php
 */
?>
<?php if ($content): ?>
  <?php print $outer_prefix; ?>
  <div class="container">
   <?php print $inner_prefix . $content . $inner_suffix; ?>
  </div>
  <?php $outer_suffix; ?>
<?php endif; ?>
