<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
if (isset($row->nid)) {
  $node = node_load($row->nid);
  $node_view = node_view($node, 'teaser');

  if (isset($node_view['field_dates'][0])) {
    $stripped_fields = $node_view['field_dates'][0];
    $stripped_fields['entity']['field_collection_item'] = array();
    $stripped_fields['entity']['field_collection_item'][$row->field_collection_item_field_data_field_dates_item_id]['field_event_date'][0]['#markup'] = $output;
    $node_view['field_dates'] = $stripped_fields;
    $output = render($node_view);
  }
}
?>

<?php print $output; ?>
