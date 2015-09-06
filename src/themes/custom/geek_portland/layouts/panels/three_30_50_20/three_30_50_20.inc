<?php
/**
 * @file
 * Adds 30x50x20% column layout.
 */

/**
 * Implements hook_panels_layouts().
 */
function geek_portland_three_30_50_20_panels_layouts() {
  $items['three_30_50_20'] = array(
    'title'    => t('AT Three column 30/50/20'),
    'category' => t('AT Responsive Panels - 3 column'),
    'icon'     => 'three_30_50_20.png',
    'theme'    => 'three_30_50_20',
    'admin css' => 'three_30_50_20.admin.css',
    'theme arguments' => array('id', 'content'),
    'regions' => array(
      'three_30_50_20_top'    => t('Top (conditional)'),
      'three_30_50_20_first'  => t('Left'),
      'three_30_50_20_second' => t('Center'),
      'three_30_50_20_third'  => t('Right'),
      'three_30_50_20_bottom' => t('Bottom (conditional)'),
    ),
    // AT Core.
    'type' => 'three',
    'options' => array(
      'three-30-50-20' => 'default',
      'three-30-50-20-stack-bottom' => 'stack bottom',
      'three-30-50-20-stack-top' => 'stack top',
      'three-30-50-20-stack' => 'stack',
    ),
    'styles' => array(
      'three-30-50-20' => array(
        'css' => array(
          '30' => array('.three-30-50-20 > .region' => 'width:30%'),
          '50' => array('.three-30-50-20 > div.region-three-30-50-20-second' => 'width:50%'),
          '20' => array('.three-30-50-20 > div.region-three-30-50-20-third' => 'width:20%'),
        ),
      ),
      'three-30-50-20-stack-bottom' => array(
        'css' => array(
          '30' => array('.three-30-50-20 > div.region-three-30-50-20-first' => 'width:30%'),
          '70' => array('.three-30-50-20 > div.region-three-30-50-20-second' => 'width:70%'),
          'fdw' => array('.three-30-50-20 > .region-three-30-50-20-third' => 'float:none;display:block;width:100%;clear:both'),
        ),
      ),
      'three-30-50-20-stack-top' => array(
        'css' => array(
          'fdw' => array('.three-30-50-20 > .region-three-30-50-20-first' => 'float:none;display:block;width:100%;clear:both'),
          '80' => array('.three-30-50-20 > div.region-three-30-50-20-second' => 'width:80%'),
          '20' => array('.three-30-50-20 > div.region-three-30-50-20-third' => 'width:20%'),
        ),
      ),
      'three-30-50-20-stack' => array(
        'css' => array(
          'fdw' => array('.three-30-50-20 > .region' => 'float:none;display:block;width:100%;clear:both'),
        ),
      ),
    ),
  );

  return $items;
}

/**
 * Preprocess variables for three-30-50-20.tpl.php.
 */
function template_preprocess_three_30_50_20(&$vars) {
  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}
