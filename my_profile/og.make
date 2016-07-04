; Organic Groups make file
core = "7.x"
api = 2

projects[og][version] = "2.9"
; Anonymous users don't see hidden group checkbox. https://drupal.org/node/2278003
projects[og][patch][] = "http://drupal.org/files/issues/og-hide_checkbox_for_anon-2278003-1.patch"
