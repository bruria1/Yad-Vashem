<?php
/**
 * @file
 * documents_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function documents_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function documents_content_type_node_info() {
  $items = array(
    'documents' => array(
      'name' => t('Documents'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('כותרת'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
