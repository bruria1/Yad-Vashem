<?php
/**
 * @file
 * footer_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function footer_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_recommended-links:admin/structure/menu/manage/menu-recommended-links
  $menu_links['management_recommended-links:admin/structure/menu/manage/menu-recommended-links'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-recommended-links',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Recommended Links',
    'options' => array(
      'identifier' => 'management_recommended-links:admin/structure/menu/manage/menu-recommended-links',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure/menu',
  );
  // Exported menu link: management_useful-resource:admin/structure/menu/manage/menu-useful-resource
  $menu_links['management_useful-resource:admin/structure/menu/manage/menu-useful-resource'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-useful-resource',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Useful Resource',
    'options' => array(
      'identifier' => 'management_useful-resource:admin/structure/menu/manage/menu-useful-resource',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_:admin/structure/menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Recommended Links');
  t('Useful Resource');


  return $menu_links;
}
