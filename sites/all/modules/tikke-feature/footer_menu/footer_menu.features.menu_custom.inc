<?php
/**
 * @file
 * footer_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function footer_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-recommended-links.
  $menus['menu-recommended-links'] = array(
    'menu_name' => 'menu-recommended-links',
    'title' => 'Recommended Links',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-useful-resource.
  $menus['menu-useful-resource'] = array(
    'menu_name' => 'menu-useful-resource',
    'title' => 'Useful Resource',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Management');
  t('Recommended Links');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('Useful Resource');


  return $menus;
}
