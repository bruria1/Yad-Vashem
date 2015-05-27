<?php
/**
 * @file
 * diary.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function diary_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|diaries_letters|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'diaries_letters';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Contents',
    'weight' => '15',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content|node|diaries_letters|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|diaries_letters|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'diaries_letters';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '2',
    'children' => array(
      0 => 'group_content',
      1 => 'group_media',
      2 => 'group_terms_relations',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-main field-group-tabs',
      ),
    ),
  );
  $export['group_main|node|diaries_letters|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|diaries_letters|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'diaries_letters';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '16',
    'children' => array(
      0 => 'field_image_file_diary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|diaries_letters|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_terms_relations|node|diaries_letters|form';
  $field_group->group_name = 'group_terms_relations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'diaries_letters';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Terms',
    'weight' => '17',
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
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Terms',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-terms-relations field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_terms_relations|node|diaries_letters|form'] = $field_group;

  return $export;
}
