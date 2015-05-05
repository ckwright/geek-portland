; Base image module set
core = "7.x"
api = 2

projects[file_entity][version] = "2.0-beta1"

projects[imagecrop][download][branch] = "7.x-1.x"
projects[imagecrop][download][revision] = "98d1faa"

projects[image_resize_filter][version] = "1.14"
; Images not resizing if path has query string: https://drupal.org/node/1929710
projects[image_resize_filter][patch][] = https://drupal.org/files/image_resize_filter-remove-query-string-1929710-8.patch

;
; MEDIA NOTE: Media can't be updated to a later version than commit aed50be until
; https://drupal.org/node/2192981 is resolved.
;
projects[media][version] = "2.0-alpha3"
; http://drupal.org/node/1278180#comment-5085370
projects[media][patch][] = "http://drupal.org/files/media-embed-library-resize.patch"
; Image resize filter fails with media https://drupal.org/node/1411340
projects[media][patch][] = "http://drupal.org/files/media-resize_images_in_wysiwyg-1411340-71.patch"
; Fix media browser: https://drupal.org/node/2048359
projects[media][patch][] = "patches/add-media-browser-access-permission-2048359-LOCAL.patch"

projects[media_youtube][version] = "2.0-rc5"
projects[media_vimeo][version] = "2.0"
