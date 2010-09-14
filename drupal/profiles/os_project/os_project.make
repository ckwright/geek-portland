; This is the actual project make file that should be edited for a
; given project. This text should be replaced with a brief description
; of the project.

includes[core] = "../opensourcery_install/opensourcery_base.make"

; Core image handling make file.
; includes[image] = "../opensourcery_install/opensourcery_image.make"

; CCK
;projects[cck][subdir] = "contrib"
;projects[cck][version] = "2.8"

; Views
;projects[views][subdir] = "contrib"
;projects[views][version] = "2.11"

; Semantic Views
; projects[semanticviews][subdir] = "contrib"
; projects[semanticviews][version] = "1.1"
;; http://drupal.org/node/832048#comment-3441744
;projects[semanticviews][patch][] = "http://drupal.org/files/issues/semanticviews.832048.patch"

; SSL handling
;projects[securepages][subdir] = "contrib"
;projects[securepages][version] = "1.8"

; Mollom
;projects[mollom][subdir] = "contrib"
;projects[mollom][version] = "1.13"

; Google analytics
;projects[google_analytics][subdir] = "contrib"
;projects[google_analytics][version] = "2.2"

; jQuery UI
;projects[jquery_ui][subdir] = "contrib"
;projects[jquery_ui][version] = "1.4"
;libraries[jquery_ui][download][type] = "get"
;libraries[jquery_ui][download][url] = "http://jquery-ui.googlecode.com/files/jquery.ui-1.6.zip"
;libraries[jquery_ui][directory_name] = "jquery.ui"
;libraries[jquery_ui][destination] = "modules/contrib/jquery_ui"

; Project-specific modules, and overrides.