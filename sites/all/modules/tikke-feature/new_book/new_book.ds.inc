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
        0 => 'language',
        1 => 'title',
        2 => 'field_title',
        3 => 'field_sub_title',
        4 => 'body',
      ),
      'left' => array(
        5 => 'field_quote_or_abstract',
        6 => 'field_teaser_qoate',
        7 => 'field_quote_name',
        8 => 'field_teaser_long_text',
        9 => 'field_main_image',
      ),
      'middle' => array(
        10 => 'field_tags_ghettos',
        11 => 'field_tags_killing_site',
        13 => 'field_tags_events',
        14 => 'field_atgs_nazi_organisation',
      ),
      'footer' => array(
        12 => 'group_right',
        15 => 'field_related_resources',
        16 => 'group_relatedresources',
        17 => 'group_online_store',
        19 => 'group_simple_link',
        22 => 'group_workshops',
        25 => 'group_main',
        26 => 'path',
        27 => 'xmlsitemap',
        28 => 'redirect',
        29 => 'group_term',
        30 => 'field_tabs',
        31 => 'group_media',
        32 => 'group_video',
        33 => 'field_helpful',
        34 => 'group_main_horizontal',
        36 => 'group_content_horizontal',
        37 => 'group_page_related_content',
        38 => 'group_related_resources',
        39 => 'field_diaries_letters',
        40 => 'field_video_gallery',
        41 => 'field_documents',
        42 => 'field_map_chart',
        43 => 'field_gallery',
        44 => 'field_research',
        45 => 'group_artifacts_content',
        46 => 'group_research_contents',
        47 => 'group_map_contents',
        48 => 'group_documents_contents',
        49 => 'group_diary_content',
        50 => 'group_video_contents',
        51 => 'field_online_store',
        52 => 'field_simple_link',
        53 => 'field_workshops',
      ),
      'right' => array(
        18 => 'field_terms',
        20 => 'field_tags_places',
        21 => 'field_tags_figures',
        23 => 'field_tags_camps',
        24 => 'field_tags_jewish_organisation',
      ),
      'hidden' => array(
        35 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'language' => 'header',
      'title' => 'header',
      'field_title' => 'header',
      'field_sub_title' => 'header',
      'body' => 'header',
      'field_quote_or_abstract' => 'left',
      'field_teaser_qoate' => 'left',
      'field_quote_name' => 'left',
      'field_teaser_long_text' => 'left',
      'field_main_image' => 'left',
      'field_tags_ghettos' => 'middle',
      'field_tags_killing_site' => 'middle',
      'group_right' => 'footer',
      'field_tags_events' => 'middle',
      'field_atgs_nazi_organisation' => 'middle',
      'field_related_resources' => 'footer',
      'group_relatedresources' => 'footer',
      'group_online_store' => 'footer',
      'field_terms' => 'right',
      'group_simple_link' => 'footer',
      'field_tags_places' => 'right',
      'field_tags_figures' => 'right',
      'group_workshops' => 'footer',
      'field_tags_camps' => 'right',
      'field_tags_jewish_organisation' => 'right',
      'group_main' => 'footer',
      'path' => 'footer',
      'xmlsitemap' => 'footer',
      'redirect' => 'footer',
      'group_term' => 'footer',
      'field_tabs' => 'footer',
      'group_media' => 'footer',
      'group_video' => 'footer',
      'field_helpful' => 'footer',
      'group_main_horizontal' => 'footer',
      '_add_existing_field' => 'hidden',
      'group_content_horizontal' => 'footer',
      'group_page_related_content' => 'footer',
      'group_related_resources' => 'footer',
      'field_diaries_letters' => 'footer',
      'field_video_gallery' => 'footer',
      'field_documents' => 'footer',
      'field_map_chart' => 'footer',
      'field_gallery' => 'footer',
      'field_research' => 'footer',
      'group_artifacts_content' => 'footer',
      'group_research_contents' => 'footer',
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
