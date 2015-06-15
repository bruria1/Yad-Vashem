<?php
/**
 * @file
 * right_links.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function right_links_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
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
 * Implements hook_image_default_styles().
 */
function right_links_image_default_styles() {
  $styles = array();

  // Exported image style: online_store.
  $styles['online_store'] = array(
    'label' => 'online store',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 190,
          'height' => 232,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: related_resources.
  $styles['related_resources'] = array(
    'label' => 'Related Resources',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 190,
          'height' => 143,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function right_links_node_info() {
  $items = array(
    'right_links' => array(
      'name' => t('Right Links'),
      'base' => 'node_content',
      'description' => t('Right Links at book page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
