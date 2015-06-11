<?php
/**
 * @file
 * quick_tab.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function quick_tab_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function quick_tab_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function quick_tab_image_default_styles() {
  $styles = array();

  // Exported image style: tabs.
  $styles['tabs'] = array(
    'label' => 'tabs',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 306,
          'height' => 198,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
