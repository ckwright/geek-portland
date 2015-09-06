<?php

/**
 * @file
 * Displays search results as a teaser instead of search's custom template.
 */
$content = node_view(node_load($result['node']->nid),'teaser');
?>
<li class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print render($content); ?>
</li>
