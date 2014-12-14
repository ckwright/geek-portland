; OpenSourcery base make file
core = "7.x"
api = 2

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;; CONTRIB ;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;; (alphabetical order) ;;;;;;;;;;;;;;;
projects[context_admin][version] = "1.2"

projects[ctools][version] = "1.4"
; http://drupal.org/node/1120028#comment-5792282
projects[ctools][patch][] = "http://drupal.org/files/page-manager-admin-paths-1120028-08.patch"
; https://drupal.org/node/1417630#comment-6810906
projects[ctools][patch][] = "https://drupal.org/files/ctools-views-content-custom-url-1417630-06.patch"

projects[chosen][version] = "2.0-beta4"

projects[date][version] = "2.8"
; Nested field values don't display correctly. https://drupal.org/node/1854378
projects[date][patch][] = "https://drupal.org/files/date-repeat-field-nested-2065747-1.patch"

projects[entitycache][version] = "1.2"

projects[elements][version] = "1.4"

projects[features][version] = "2.2"
; PDO exception if permissions are set in same feature as module creating them. http://drupal.org/node/1063204#comment-6350488
projects[features][patch][] = "http://drupal.org/files/features_static_caches-1063204-32.patch"

projects[fences][version] = "1.0"

projects[google_analytics][version] = "2.1"

projects[html5_tools][download][branch] = "7.x-1.x"
projects[html5_tools][download][revision] = "11e0c28"

projects[linkchecker][version] = "1.1"

projects[redirect][version] = "1.0-rc1"

projects[pathauto][version] = "1.2"

projects[strongarm][version] = "2.0"

projects[token][version] = "1.5"

projects[views][version] = "3.8"
; Exposed Sort By and Sort Order view pane settings not retained https://drupal.org/node/2037469
projects[views][patch][] = "https://drupal.org/files/views-exposed-sorts-2037469-1.patch"

;projects[views_bulk_operations][version] = "3.1"

projects[wysiwyg][version] = "2.2"
; Select theme css patch: http://drupal.org/node/1309040#comment-6107956
projects[wysiwyg][patch][] = "http://drupal.org/files/1309040-22-select_theme_css.patch"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;; DEVELOPMENT MODULES ;;;;;;;;;;;;;
;;;;;;;; (may be disabled for production) ;;;;;;;;
projects[admin_menu][type] = "module"
projects[admin_menu][subdir] = "development"
projects[admin_menu][version] = "3.0-rc4"

projects[devel][subdir] = "development"
projects[devel][download][branch] = "7.x-1.x"
projects[devel][download][revision] = "c29e12f3"

projects[environment_indicator][subdir] = "development"
projects[environment_indicator][version] = "2.0"

projects[maillog][download][branch] = "7.x-1.x"
projects[maillog][download][revision] = "2591153"
projects[maillog][subdir] = "development"
; Behat step-definitions: https://drupal.org/node/1932698#comment-7131840
projects[maillog][patch][] = "https://drupal.org/files/behat-subcontext-1932698-1.patch"

projects[os_devel][type] = "module"
projects[os_devel][subdir] = "development"
projects[os_devel][download][branch] = "7.x-1.x"
projects[os_devel][download][url] = "https://github.com/opensourcery/os_devel.git"

projects[os_testing][type] = "module"
projects[os_testing][subdir] = "development"
projects[os_testing][download][tag] = "7.x-1.0"
projects[os_testing][download][url] = "https://github.com/opensourcery/os_testing.git"

projects[stage_file_proxy][subdir] = "development"
projects[stage_file_proxy][version] = "1.6"

projects[styleguide][subdir] = "development"
projects[styleguide][version] = "1.1"

projects[diff][subdir] = "development"
projects[diff][version] = "3.2"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;; LIBRARIES ;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Pull a pull-request branch for jQuery < 1.6 support. See:
; * https://github.com/harvesthq/chosen/pull/1555
; * https://github.com/harvesthq/chosen/pull/1702
libraries[chosen][download][type] = "git"
libraries[chosen][download][branch] = "with-built-assets"
libraries[chosen][download][revision] = "ae2ef5d"
libraries[chosen][download][url] = "https://github.com/opensourcery/chosen.git"

libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "https://github.com/downloads/tinymce/tinymce/tinymce_3.5.8.zip"
libraries[tinymce][destination] = "libraries"
libraries[tinymce][directory_name] = "tinymce"
