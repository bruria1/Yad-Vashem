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
      'vid' => 'explore_tab',
      'display' => 'block',
      'args' => '',
      'use_title' => 0,
      'title' => 'Featured',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'books_tab',
      'display' => 'block_7',
      'args' => '',
      'use_title' => 0,
      'title' => 'Diary',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'books_tab',
      'display' => 'block_5',
      'args' => '',
      'use_title' => 0,
      'title' => 'Docs',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'bid' => 'costum_delta_costume_tab_1',
      'hide_title' => 1,
      'title' => 'Gallery',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'costum_delta_video_tab_1',
      'hide_title' => 1,
      'title' => 'Testamonies',
      'weight' => '-96',
      'type' => 'block',
    ),
    5 => array(
      'bid' => 'costum_delta_video_tab_2',
      'hide_title' => 1,
      'title' => 'Archive film',
      'weight' => '-95',
      'type' => 'block',
    ),
    6 => array(
      'bid' => 'costum_delta_video_tab_3',
      'hide_title' => 1,
      'title' => 'Lectures',
      'weight' => '-94',
      'type' => 'block',
    ),
    7 => array(
      'bid' => 'costum_delta_costume_tab_2',
      'hide_title' => 1,
      'title' => 'Art',
      'weight' => '-93',
      'type' => 'block',
    ),
    8 => array(
      'bid' => 'costum_delta_costume_tab_3',
      'hide_title' => 1,
      'title' => 'Artifact',
      'weight' => '-92',
      'type' => 'block',
    ),
    9 => array(
      'vid' => 'books_tab',
      'display' => 'block_4',
      'args' => '',
      'use_title' => 0,
      'title' => 'Map',
      'weight' => '-91',
      'type' => 'view',
    ),
    10 => array(
      'bid' => 'block_delta_4',
      'hide_title' => 1,
      'title' => 'Archive Film',
      'weight' => '-90',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Archive Film');
  t('Archive film');
  t('Art');
  t('Artifact');
  t('Book page');
  t('Diary');
  t('Docs');
  t('Featured');
  t('Gallery');
  t('Lectures');
  t('Map');
  t('Testamonies');

  $export['book_page'] = $quicktabs;

  return $export;
}
