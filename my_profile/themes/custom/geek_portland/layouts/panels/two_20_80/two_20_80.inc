<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
function geek_portland_two_25_75_panels_layouts() {
  $items['two_25_75'] = array(
    'title' => t('AT Two column 25/75'),
    'category' => t('AT Responsive Panels - 2 column'),
    'icon' => 'two_25_75.png',
    'theme' => 'two_25_75',
    'admin css' => 'two_25_75.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'two_25_75_top'    => t('Top (conditional)'),
      'two_25_75_first'  => t('Left'),
      'two_25_75_second' => t('Right'),
      'two_25_75_bottom' => t('Bottom (conditional)'),
    ),
    // AT Core
    'type' => 'two',
    'options' => array(
      'two-25-75' => 'default',
      'two-25-75-stack' => 'stack',
    ),
    'styles' => array(
      'two-25-75' => array(
        'css' => array(
          '25' => array('.two-25-75 > .region-two-25-75-first' => 'width:25%'),
          '75' => array('.two-25-75 > .region-two-25-75-second' => 'width:75%'),
        ),
      ),
      'two-25-75-stack' => array(
        'css' => array(
          'fdw' => array('.two-25-75 > .region' => 'float:none;display:block;width:100%;clear:both'),
        ),
      ),
    ),
  );

  return $items;
}

/**
 * Preprocess variables for two-25-75.tpl.php
 */
function template_preprocess_two_25_75(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
