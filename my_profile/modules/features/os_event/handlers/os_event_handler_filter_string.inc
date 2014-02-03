<?php

/**
 * @file
 * Definition of os_event_views_handler_filter_string.
 */

/**
 * Overrides views_handler_filter_string.
 *
 * Ensures basic textfield filter when set to "not" will correctly search fields
 * with NULL values.
 *
 */
class os_event_handler_filter_string extends views_handler_filter_string {

  function op_not($field) {
    $placeholder = $this->placeholder();
    $this->query->add_where_expression($this->options['group'], "COALESCE($field, '') NOT LIKE $placeholder", array($placeholder => '%' . db_like($this->value) . '%'));
  }

}