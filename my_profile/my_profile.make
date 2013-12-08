; This is the actual project make file that should be edited for a
; given project. This text should be replaced with a brief description
; of the project.
api = 2

; Set contrib directory.
defaults[projects][subdir] = "contrib"

; Drupal core.
core = "7.x"
projects[drupal][type] = "core"
projects[drupal][version] = "7.24"
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
;includes[panels] = "panels.make"

; Uncomment to use Solr Search.
; includes[solr] = "solr.make"

; Project-specific modules, and overrides.

; OS Event
projects[os_event][type] = "module"
projects[os_event][subdir] = "features"
projects[os_event][download][type] = "git"
projects[os_event][download][revision] = "9490095"
projects[os_event][download][branch] = "7.x-2.x"
projects[os_event][download][url] = "https://github.com/opensourcery/os_event.git"

; OS Blog
projects[os_blog][type] = "module"
projects[os_blog][subdir] = "features"
projects[os_blog][download][type] = "git"
projects[os_blog][download][revision] = "c038c2f"
projects[os_blog][download][branch] = "7.x-2.x"
projects[os_blog][download][url] = "https://github.com/opensourcery/os_blog.git"

; Entity
projects[entity][version] = "1.2"

; Follow
projects[follow][version] = "2.0-alpha1"

; Full Calendar
projects[fullcalendar][version] = "2.0"

; JQuery Update
projects[jquery_update][version] = "2.3"

; Mollom
projects[mollom][version] = "2.7"

; Libraries.
projects[libraries][version] = "2.1"

; Views Bulk Operations
projects[views_bulk_operations][version] = "3.1"

; Libraries

; Profiler
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.0-beta2.tar.gz"


; Full Calendar (js)
libraries[fullcalendar][download][type] = "get"
libraries[fullcalendar][download][url] = "https://github.com/arshaw/fullcalendar/releases/download/v1.6.4/fullcalendar-1.6.4.zip"

;
; Theme
;
projects[adaptivetheme][version] = "3.1"
projects[corolla][version] = "3.0-rc1"
