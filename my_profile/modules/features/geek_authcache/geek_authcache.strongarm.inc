<?php
/**
 * @file
 * geek_authcache.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function geek_authcache_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_mimetype';
  $strongarm->value = 'text/html
text/javascript
text/plain
application/xml
application/atom+xml
';
  $export['authcache_mimetype'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_roles';
  $strongarm->value = array(
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $export['authcache_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache';
  $strongarm->value = 1;
  $export['cache'] = $strongarm;

  return $export;
}
