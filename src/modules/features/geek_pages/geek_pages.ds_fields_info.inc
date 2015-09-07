<?php

/**
 * @file
 * Display Suite fields.
 */

/**
 * Implements hook_ds_fields_info().
 */
function geek_pages_ds_fields_info($entity_type) {
  $fields = array();

  $fields['node']['related_link'] = array(
    'title' => t('Related events'),
    'field_type' => DS_FIELD_TYPE_FUNCTION,
    'function' => 'geek_pages_render_related_link',
    'properties' => array(
      'settings' => array(
        'link text' => array('type' => 'textfield'),
      ),
      'default' => array('link text' => 'Upcoming Events'),
    ),
  );

  return $fields;
}
