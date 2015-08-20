<?php
/**
 * @file
 * video.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function video_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|video_gallery|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Contents',
    'weight' => '10',
    'children' => array(
      0 => 'body',
      1 => 'field_teaser_long_text',
      2 => 'field_video_sub_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_content|node|video_gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|video_gallery|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '4',
    'children' => array(
      0 => 'group_content',
      1 => 'group_terms_relations',
      2 => 'group_video',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_main|node|video_gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_terms_relations|node|video_gallery|form';
  $field_group->group_name = 'group_terms_relations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Terms & Relations',
    'weight' => '13',
    'children' => array(
      0 => 'field_terms',
      1 => 'field_tags_places',
      2 => 'field_tags_figures',
      3 => 'field_tags_camps',
      4 => 'field_tags_ghettos',
      5 => 'field_tags_killing_site',
      6 => 'field_tags_events',
      7 => 'field_atgs_nazi_organisation',
      8 => 'field_tags_jewish_organisation',
      9 => 'field_content_relation',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_terms_relations|node|video_gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_testimonies|field_collection_item|field_video_collection|token';
  $field_group->group_name = 'group_testimonies';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_video_collection';
  $field_group->mode = 'token';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Testimonies',
    'weight' => '1',
    'children' => array(
      0 => 'field_video_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Testimonies',
      'instance_settings' => array(
        'classes' => 'Testimonies',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_testimonies|field_collection_item|field_video_collection|token'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|video_gallery|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '11',
    'children' => array(
      0 => 'field_video_collection',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_video|node|video_gallery|form'] = $field_group;

  return $export;
}
