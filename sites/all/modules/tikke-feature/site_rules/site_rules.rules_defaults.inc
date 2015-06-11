<?php
/**
 * @file
 * site_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function site_rules_default_rules_configuration() {
  $items = array();
  $items['rules_translate'] = entity_import('rules_config', '{ "rules_translate" : {
      "LABEL" : "translate content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "yadvashem", "rules" ],
      "ON" : {
        "node_insert--artifacts_gallery_arts" : { "bundle" : "artifacts_gallery_arts" },
        "node_insert--diaries_letters" : { "bundle" : "diaries_letters" },
        "node_insert--documents" : { "bundle" : "documents" },
        "node_insert--maps_charts" : { "bundle" : "maps_charts" },
        "node_insert--research" : { "bundle" : "research" },
        "node_insert--video_gallery" : { "bundle" : "video_gallery" }
      },
      "DO" : [ { "yadvashem_action_node_translate" : { "node" : [ "node" ] } } ]
    }
  }');
  return $items;
}
