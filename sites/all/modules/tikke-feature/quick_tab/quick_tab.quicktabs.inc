<?php
/**
 * @file
 * quick_tab.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function quick_tab_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'book_page';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Book page';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'books_tab',
      'display' => 'block',
      'args' => '',
      'title' => 'Photo',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'books_tab',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Artifacts',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'books_tab',
      'display' => 'block_2',
      'args' => '',
      'title' => 'Art',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'books_tab',
      'display' => 'block_3',
      'args' => '',
      'title' => 'Research',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'books_tab',
      'display' => 'block_4',
      'args' => '',
      'title' => 'Map',
      'weight' => '-96',
      'type' => 'view',
    ),
    5 => array(
      'vid' => 'books_tab',
      'display' => 'block_5',
      'args' => '',
      'title' => 'Documents',
      'weight' => '-95',
      'type' => 'view',
    ),
    6 => array(
      'vid' => 'books_tab',
      'display' => 'default',
      'args' => '',
      'title' => 'Diary',
      'weight' => '-94',
      'type' => 'view',
    ),
    7 => array(
      'vid' => 'books_tab',
      'display' => 'block_6',
      'args' => '',
      'title' => 'Videos',
      'weight' => '-93',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Art');
  t('Artifacts');
  t('Book page');
  t('Diary');
  t('Documents');
  t('Map');
  t('Photo');
  t('Research');
  t('Videos');

  $export['book_page'] = $quicktabs;

  return $export;
}
