<?php
/**
 * @file
 * book_content_type.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function book_content_type_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-the-holocaust.
  $menus['menu-the-holocaust'] = array(
    'menu_name' => 'menu-the-holocaust',
    'title' => 'The Holocaust',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('The Holocaust');


  return $menus;
}
