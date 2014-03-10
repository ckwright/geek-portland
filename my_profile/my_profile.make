; This is the actual project make file that should be edited for a
; given project. This text should be replaced with a brief description
; of the project.
api = 2

; Set contrib directory.
defaults[projects][subdir] = "contrib"

; Drupal core.
core = "7.x"
projects[drupal][type] = "core"
projects[drupal][version] = "7.26"
; Ensure plain text fields evaluate line breaks.
projects[drupal][patch][] = "http://drupal.org/files/text-plain-1152216-24.patch"
; Resolve php notice thrown by the way PHP 5.4 handles array indexes vs 5.3. https://drupal.org/node/1824820#comment-6656728
projects[drupal][patch][] = "https://drupal.org/files/string-offset-cast-1824820-2.patch"

; Base installation profile
includes[base] = "base.make"

; Image handling. Comment this out if you don't need any image handling.
includes[images] = "images.make"

; Uncomment this to enable demo content. Do not use on production.
;includes[demo] = "demo.make"

; Uncomment to use Panels.
includes[panels] = "panels.make"

; Uncomment to use Search.
includes[search] = "search.make"

; Organic Groups.
includes[og] = "og.make"

; Project-specific modules, and overrides.

; Address Field
projects[addressfield][version] = "1.0-beta5"

; Context
projects[context][version] = "3.2"
projects[context_query_param][version] = "1.3"

; Display Suite
projects[ds][version] = "2.6"

; Entity
projects[entity][version] = "1.3"

; Entity Reference
projects[entityreference][version] = "1.1"

; Follow
projects[follow][version] = "2.0-alpha1"

; Full Calendar
projects[fullcalendar][version] = "2.0"

projects[geocoder][version] = "1.2"

projects[geofield][version] = "2.1"

projects[geophp][version] = "1.7"

; iCal
projects[date_ical][version] = "3.1"

; JQuery Update
projects[jquery_update][version] = "2.3"

; Mollom
projects[mollom][version] = "2.7"

; Libraries.
projects[libraries][version] = "2.2"

; Location
projects[location][version] = "3.1"

; Link
projects[link][version] = "1.2"

; References dialog
projects[references_dialog][version] = "1.0-alpha4"
; Entity Reference incorrectly calls entity_access() https://drupal.org/comment/7893609#comment-7893609
projects[references_dialog][patch][] = "https://drupal.org/files/references_dialog-wrong-call-to-entity_access-1780626-6.patch"

; Views Bulk Operations
projects[views_bulk_operations][version] = "3.2"

; Libraries

; Profiler
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.0-beta2.tar.gz"


; Full Calendar (js)
libraries[fullcalendar][download][type] = "get"
libraries[fullcalendar][download][url] = "https://github.com/arshaw/fullcalendar/releases/download/v1.6.4/fullcalendar-1.6.4.zip"

; Magnific Popup
libraries[magnific-popup][download][type] = "git"
libraries[magnific-popup][download][url] = "https://github.com/dimsemenov/Magnific-Popup.git"

; iCalcreator
libraries[iCalcreator][download][type] = "git"
libraries[iCalcreator][download][url] = "git://github.com/iCalcreator/iCalcreator.git"

;
; Theme
;
projects[adaptivetheme][version] = "3.1"
projects[sky][version] = "3.0-rc1"
