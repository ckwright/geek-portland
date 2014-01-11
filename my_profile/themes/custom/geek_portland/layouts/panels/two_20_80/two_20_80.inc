<?php

/**
 * @file
 * Implementation of hook_panels_layouts
 */
function geek_portland_two_20_80_panels_layouts() {
  $items['two_20_80'] = array(
    'title' => t('AT Two column 20/80'),
    'category' => t('AT Responsive Panels - 2 column'),
    'icon' => 'two_20_80.png',
    'theme' => 'two_20_80',
    'admin css' => 'two_20_80.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'two_20_80_top'    => t('Top (conditional)'),
      'two_20_80_first'  => t('Left'),
      'two_20_80_second' => t('Right'),
      'two_20_80_bottom' => t('Bottom (conditional)'),
    ),
    // AT Core
    'type' => 'two',
    'options' => array(
      'two-20-80' => 'default',
      'two-20-80-stack' => 'stack',
    ),
    'styles' => array(
      'two-20-80' => array(
        'css' => array(
          '20' => array('.two-20-80 > .region-two-20-80-first' => 'width:20%'),
          '80' => array('.two-20-80 > .region-two-20-80-second' => 'width:80%'),
        ),
      ),
      'two-20-80-stack' => array(
        'css' => array(
          'fdw' => array('.two-20-80 > .region' => 'float:none;display:block;width:100%;clear:both'),
        ),
      ),
    ),
  );

  return $items;
}

/**
 * Preprocess variables for two-20-80.tpl.php
 */
function template_preprocess_two_20_80(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
