<?php
/**
 * @file
 * diary.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function diary_ctools_plugin_api($module = NULL, $api = NULL) {
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
function diary_node_info() {
  $items = array(
    'diaries_letters' => array(
      'name' => t('Diary/letter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Ttitle'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
