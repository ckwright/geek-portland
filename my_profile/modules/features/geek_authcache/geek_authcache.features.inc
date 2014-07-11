<?php
/**
 * @file
 * geek_authcache.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function geek_authcache_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
