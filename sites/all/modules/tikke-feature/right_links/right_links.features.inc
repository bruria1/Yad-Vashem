<?php
/**
 * @file
 * right_links.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function right_links_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function right_links_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function right_links_node_info() {
  $items = array(
    'online_store' => array(
      'name' => t('Online Store'),
      'base' => 'node_content',
      'description' => t('Online Store at book page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'related_resources' => array(
      'name' => t('Related resources'),
      'base' => 'node_content',
      'description' => t('Related resources at book page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'simple_link_to_book_page' => array(
      'name' => t('Simple link to book page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'workshops' => array(
      'name' => t('Workshops'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
