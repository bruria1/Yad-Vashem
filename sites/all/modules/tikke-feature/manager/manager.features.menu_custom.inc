<?php
/**
 * @file
 * manager.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function manager_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-manager.
  $menus['menu-manager'] = array(
    'menu_name' => 'menu-manager',
    'title' => 'manager',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('manager');


  return $menus;
}
