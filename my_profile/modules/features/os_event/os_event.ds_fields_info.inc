<?php

/**
 * @file
 * Display Suite fields.
 */

/**
 * Implements hook_ds_fields_info().
 */
function os_event_ds_fields_info($entity_type) {
  $fields = array();

  $fields['node']['ical_link'] = array(

    // title: title of the field
    'title' => t('iCal link'),
    'field_type' => DS_FIELD_TYPE_FUNCTION,
    'function' => 'theme_ical_link',
    'properties' => array(
      'settings' => array(
        'link text' => array('type' => 'textfield'),
        'wrapper' => array('type' => 'textfield', 'description' => t('Eg: h1, h2, p')),
        'class' => array('type' => 'textfield', 'description' => t('Put a class on the wrapper. Eg: block-title')),
      ),
      'default' => array('link text' => 'Read more', 'wrapper' => '', 'class' => '', 'link' => 1),
    )
  );

  $fields['node']['map_link'] = array(

    // title: title of the field
    'title' => t('iCal link'),
    'field_type' => DS_FIELD_TYPE_FUNCTION,
    'function' => 'theme_map_link',
    'properties' => array(
      'settings' => array(
        'link text' => array('type' => 'textfield'),
        'wrapper' => array('type' => 'textfield', 'description' => t('Eg: h1, h2, p')),
        'class' => array('type' => 'textfield', 'description' => t('Put a class on the wrapper. Eg: block-title')),
      ),
      'default' => array('link text' => 'Read more', 'wrapper' => '', 'class' => '', 'link' => 1),
    )
  );

  return array('node' => $fields);

}
