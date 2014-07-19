<?php
/**
 * @file
 * os_base.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function os_base_default_rules_configuration() {
  $items = array();
  $items['rules_new_node_needs_moderation'] = entity_import('rules_config', '{ "rules_new_node_needs_moderation" : {
      "LABEL" : "New node needs moderation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } },
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "1" : "1" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "ninjahq@gmail.com",
            "subject" : "New item titled \\u0022[node:title]\\u0022 is ready for your review at Geek Portland!",
            "message" : "New item titled \\u0022[node:title]\\u0022 is ready for your review at Geek Portland!\\r\\n\\r\\n- View the item at [node:url]\\r\\n- Edit the item at [node:edit-url]\\r\\n- View all items awaiting approval [site:url]admin\\/workbench\\/needs-review",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
