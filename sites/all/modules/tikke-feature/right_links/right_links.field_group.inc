<?php
/**
 * @file
 * right_links.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function right_links_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_horizontal|node|book|form';
  $field_group->group_name = 'group_main_horizontal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page_inner';
  $field_group->data = array(
    'label' => 'main horizontal',
    'weight' => '26',
    'children' => array(
      0 => 'group_content',
      1 => 'group_media',
      2 => 'group_term',
      3 => 'group_video',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-main-horizontal field-group-htabs',
      ),
    ),
  );
  $export['group_main_horizontal|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|book|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_horizontal';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '24',
    'children' => array(
      0 => 'field_video_text_field',
      1 => 'field_youtube_video',
      2 => 'field_video_youube',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-video field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_video|node|book|form'] = $field_group;

  return $export;
}
