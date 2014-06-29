<?php
/**
 * @file
 * geek_messages.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function geek_messages_default_rules_configuration() {
  $items = array();
  $items['rules_new_item_needs_review'] = entity_import('rules_config', '{ "rules_new_item_needs_review" : {
      "LABEL" : "New item needs review",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "new_content_ready_for_review",
              "param_user" : [ "site:current-user" ]
            },
            "PROVIDE" : { "entity_created" : { "item_created" : "Created item" } }
          }
        },
        { "data_set" : { "data" : [ "item-created:field-related-node" ], "value" : [ "node" ] } }
      ]
    }
  }');
  return $items;
}
