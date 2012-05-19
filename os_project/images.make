; Base image module set
core = "7.x"
api = 2

projects[adaptive_image][subdir] = "contrib"
projects[adaptive_image][version] = "1.4"

projects[caption_filter][subdir] = "contrib"
projects[caption_filter][download][type] = "git"
projects[caption_filter][download][revision] = "c9794cfdc1fc4bde14db6260ccf394d77fe43f60"
projects[caption_filter][patch][] = "http://drupal.org/files/caption-button-1432092-4.patch"

projects[file_entity][subdir] = "contrib"
projects[file_entity][version] = "2.0-unstable4"

projects[image_resize_filter][subdir] = "contrib"
projects[image_resize_filter][version] = "1.13"

projects[media][subdir] = "contrib"
projects[media][version] = "2.0-unstable4"
; Crash during install profile installation - http://drupal.org/node/1311828
projects[media][patch][] = "http://drupal.org/files/check_if_media_the_type_table_exists-1311828-13.patch"
; http://drupal.org/node/1278180#comment-5085370
projects[media][patch][] = "http://drupal.org/files/media-embed-library-resize.patch"

projects[plupload][subdir] = "contrib"
projects[plupload][version] = "1.0-beta4"

libraries[plupload][download][type] = "get"
libraries[plupload][download][url] = "http://cloud.github.com/downloads/moxiecode/plupload/plupload_1_5_1_1.zip"
libraries[plupload][download][destination] = "libraries"
libraries[plupload][download][directory_name] = "plupload"