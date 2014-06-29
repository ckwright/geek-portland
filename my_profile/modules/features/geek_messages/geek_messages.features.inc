<?php
/**
 * @file
 * geek_messages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function geek_messages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function geek_messages_default_message_type() {
  $items = array();
  $items['new_content_ready_for_review'] = entity_import('message_type', '{
    "name" : "new_content_ready_for_review",
    "description" : "New content ready for review",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Cp\\u003EThis submitted item is ready for approval.\\u003C\\/p\\u003E\\u003Cp\\u003ETo view all such items, visit \\u003Ca href=\\u0022\\/admin\\/workbench\\/needs-review\\u0022\\u003Ethe workbench moderation page\\u003C\\/a\\u003E.\\u003C\\/p\\u003E",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003EThis submitted item is ready for approval.\\u003C\\/p\\u003E\\u003Cp\\u003ETo view all such items, visit \\u003Ca href=\\u0022\\/admin\\/workbench\\/needs-review\\u0022\\u003Ethe workbench moderation page\\u003C\\/a\\u003E.\\u003C\\/p\\u003E"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
