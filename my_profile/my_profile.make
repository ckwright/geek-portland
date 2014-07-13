; This is the actual project make file that should be edited for a
; given project. This text should be replaced with a brief description
; of the project.
api = 2

; Set contrib directory.
defaults[projects][subdir] = "contrib"

; Drupal core.
core = "7.x"
projects[drupal][type] = "core"
projects[drupal][version] = "7.28"
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

; Admin Views
projects[admin_views][version] = "1.3"

; Authcache
projects[authcache][version] = "2.0-beta3"

; Context
projects[context][version] = "3.2"
projects[context_query_param][version] = "1.3"

; Display Suite
projects[ds][version] = "2.6"

; Entity
projects[entity][download][branch] = "7.x-1.x"
projects[entity][download][revision] = "d9baed7"

; Entity Reference
projects[entityreference][version] = "1.1"

; Field collection
projects[field_collection][version] = "1.0-beta7"

; Full Calendar
projects[fullcalendar][version] = "2.0"

projects[geocoder][version] = "1.2"

projects[geofield][version] = "2.1"

projects[geophp][version] = "1.7"

libraries[geoPHP][type] = "libraries"
libraries[geoPHP][download][type] = "git"
libraries[geoPHP][download][url] = "git://github.com/phayes/geoPHP.git"
libraries[geoPHP][download][branch] = "master"
libraries[geoPHP][download][revision] = "0aae7c3"

; iCal
projects[date_ical][version] = "3.2"

; JQuery Update
projects[jquery_update][download][branch] = "7.x-2.x"
projects[jquery_update][download][revision] = "65eecb0"
; Allow core jquery on admin: https://drupal.org/comment/7983779#comment-7983779
projects[jquery_update][patch][] = "https://drupal.org/files/jquery_update-1548028-25-default-jquery.patch"
projects[jquery_update][patch][] = "https://drupal.org/files/issues/jquery_update-local-ui-effects-not-found-2149395.patch"

; Honeypot
projects[honeypot][version] = "1.17"

; Libraries.
projects[libraries][version] = "2.2"

; Link
projects[link][version] = "1.2"

; References dialog
projects[references_dialog][download][branch] = "7.x-1.x"
projects[references_dialog][download][revision] = "c2457782"

; Rules
projects[rules][version] = "2.7"

; Smart trim
projects[smart_trim][version] = "1.4"

; Views Bulk Operations
projects[views_bulk_operations][version] = "3.2"
projects[viewfield][version] = "2.0"

projects[views_infinite_scroll][version] = "1.1"

projects[workbench_moderation][version] = "1.3"

; Libraries

; Profiler
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.0-beta2.tar.gz"


; Full Calendar (js)
libraries[fullcalendar][download][type] = "get"
libraries[fullcalendar][download][url] = "https://github.com/arshaw/fullcalendar/releases/download/v2.0.2/fullcalendar-2.0.2.zip"

; Magnific Popup
libraries[magnific-popup][download][type] = "git"
libraries[magnific-popup][download][url] = "https://github.com/dimsemenov/Magnific-Popup.git"

; iCalcreator
libraries[iCalcreator][download][type] = "git"
libraries[iCalcreator][download][url] = "git://github.com/iCalcreator/iCalcreator.git"

; Autopager
libraries[autopager][download][type] = "get"
libraries[autopager][download][url] = "http://jquery-autopager.googlecode.com/files/jquery.autopager-1.0.0.js"

;
; Theme
;
projects[adaptivetheme][version] = "3.2"
projects[sky][version] = "3.0"
