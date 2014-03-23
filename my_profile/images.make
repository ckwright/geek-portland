; Base image module set
core = "7.x"
api = 2

projects[file_entity][version] = "2.0-alpha3"

projects[imagefield_crop][version] = "1.1"

projects[image_resize_filter][version] = "1.14"
; Images not resizing if path has query string: https://drupal.org/node/1929710
projects[image_resize_filter][patch][] = https://drupal.org/files/image_resize_filter-remove-query-string-1929710-8.patch

projects[media][version] = "2.0-alpha3"
; http://drupal.org/node/1278180#comment-5085370
projects[media][patch][] = "http://drupal.org/files/media-embed-library-resize.patch"
; Image resize filter fails with media https://drupal.org/node/1411340
projects[media][patch][] = "https://drupal.org/files/media-resize_images_in_wysiwyg-1411340-71.patch"
