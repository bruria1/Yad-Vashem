<?php
/**
 * @file
 * new_book.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function new_book_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|book|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'book';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_3col_stacked_equal_width';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
        1 => 'language',
        2 => 'field_title',
        3 => 'field_sub_title',
        4 => 'body',
      ),
      'left' => array(
        5 => 'field_quote_or_abstract',
        6 => 'field_teaser_qoate',
        7 => 'field_quote_name',
        8 => 'field_teaser_long_text',
      ),
      'middle' => array(
        9 => 'field_tags_ghettos',
        10 => 'field_tags_killing_site',
        11 => 'field_tags_events',
        12 => 'field_atgs_nazi_organisation',
      ),
      'footer' => array(
        13 => 'group_right',
        14 => 'field_related_resources',
        15 => 'group_relatedresources',
        18 => 'group_online_store',
        19 => 'group_simple_link',
        21 => 'group_workshops',
        24 => 'field_tabs',
        25 => 'path',
        26 => 'xmlsitemap',
        27 => 'group_content',
        28 => 'redirect',
        29 => 'group_main',
        30 => 'group_term',
        31 => 'group_main_horizontal',
        32 => 'group_media',
        33 => 'group_video',
        34 => 'field_helpful',
        36 => 'group_content_horizontal',
        37 => 'field_main_image',
        38 => 'field_gallery_inner',
        39 => 'group_page_related_content',
        40 => 'group_related_resources',
        41 => 'field_diaries_letters',
        42 => 'field_video_gallery',
        43 => 'field_documents',
        44 => 'field_map_chart',
        45 => 'field_research',
        46 => 'field_gallery',
        47 => 'group_artifacts_content',
        48 => 'group_research_contents',
        49 => 'field_video_youube',
        50 => 'group_map_contents',
        51 => 'group_documents_contents',
        52 => 'group_diary_content',
        53 => 'group_video_contents',
        54 => 'field_online_store',
        55 => 'field_simple_link',
        56 => 'field_workshops',
      ),
      'right' => array(
        16 => 'field_terms',
        17 => 'field_tags_places',
        20 => 'field_tags_figures',
        22 => 'field_tags_camps',
        23 => 'field_tags_jewish_organisation',
      ),
      'hidden' => array(
        35 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'language' => 'header',
      'field_title' => 'header',
      'field_sub_title' => 'header',
      'body' => 'header',
      'field_quote_or_abstract' => 'left',
      'field_teaser_qoate' => 'left',
      'field_quote_name' => 'left',
      'field_teaser_long_text' => 'left',
      'field_tags_ghettos' => 'middle',
      'field_tags_killing_site' => 'middle',
      'field_tags_events' => 'middle',
      'field_atgs_nazi_organisation' => 'middle',
      'group_right' => 'footer',
      'field_related_resources' => 'footer',
      'group_relatedresources' => 'footer',
      'field_terms' => 'right',
      'field_tags_places' => 'right',
      'group_online_store' => 'footer',
      'group_simple_link' => 'footer',
      'field_tags_figures' => 'right',
      'group_workshops' => 'footer',
      'field_tags_camps' => 'right',
      'field_tags_jewish_organisation' => 'right',
      'field_tabs' => 'footer',
      'path' => 'footer',
      'xmlsitemap' => 'footer',
      'group_content' => 'footer',
      'redirect' => 'footer',
      'group_main' => 'footer',
      'group_term' => 'footer',
      'group_main_horizontal' => 'footer',
      'group_media' => 'footer',
      'group_video' => 'footer',
      'field_helpful' => 'footer',
      '_add_existing_field' => 'hidden',
      'group_content_horizontal' => 'footer',
      'field_main_image' => 'footer',
      'field_gallery_inner' => 'footer',
      'group_page_related_content' => 'footer',
      'group_related_resources' => 'footer',
      'field_diaries_letters' => 'footer',
      'field_video_gallery' => 'footer',
      'field_documents' => 'footer',
      'field_map_chart' => 'footer',
      'field_research' => 'footer',
      'field_gallery' => 'footer',
      'group_artifacts_content' => 'footer',
      'group_research_contents' => 'footer',
      'field_video_youube' => 'footer',
      'group_map_contents' => 'footer',
      'group_documents_contents' => 'footer',
      'group_diary_content' => 'footer',
      'group_video_contents' => 'footer',
      'field_online_store' => 'footer',
      'field_simple_link' => 'footer',
      'field_workshops' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|book|form'] = $ds_layout;

  return $export;
}
