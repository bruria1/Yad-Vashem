<?php
/**
 * @file
 * new_book.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function new_book_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_artifacts_content|node|book|form';
  $field_group->group_name = 'group_artifacts_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_horizontal';
  $field_group->data = array(
    'label' => 'Gallery',
    'weight' => '51',
    'children' => array(
      0 => 'field_gallery',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Gallery',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_artifacts_content|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_horizontal|node|book|form';
  $field_group->group_name = 'group_content_horizontal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page_related_content';
  $field_group->data = array(
    'label' => 'content horizontal',
    'weight' => '27',
    'children' => array(
      0 => 'group_artifacts_content',
      1 => 'group_diary_content',
      2 => 'group_documents_contents',
      3 => 'group_map_contents',
      4 => 'group_research_contents',
      5 => 'group_video_contents',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-content-horizontal field-group-htabs',
      ),
    ),
  );
  $export['group_content_horizontal|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|book|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_horizontal';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '20',
    'children' => array(
      0 => 'field_teaser_qoate',
      1 => 'field_quote_name',
      2 => 'body',
      3 => 'field_teaser_long_text',
      4 => 'field_quote_or_abstract',
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
  $export['group_content|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_diary_content|node|book|form';
  $field_group->group_name = 'group_diary_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_horizontal';
  $field_group->data = array(
    'label' => 'Diary/letter',
    'weight' => '56',
    'children' => array(
      0 => 'field_diaries_letters',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Diary/letter',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_diary_content|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_documents_contents|node|book|form';
  $field_group->group_name = 'group_documents_contents';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_horizontal';
  $field_group->data = array(
    'label' => 'Documents',
    'weight' => '55',
    'children' => array(
      0 => 'field_documents',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Documents',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_documents_contents|node|book|form'] = $field_group;

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
  $field_group->identifier = 'group_map_contents|node|book|form';
  $field_group->group_name = 'group_map_contents';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_horizontal';
  $field_group->data = array(
    'label' => 'Map/Chart',
    'weight' => '54',
    'children' => array(
      0 => 'field_map_chart',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Map/Chart',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_map_contents|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|book|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_horizontal';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '23',
    'children' => array(
      0 => 'field_main_image',
      1 => 'field_gallery_inner',
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
  $export['group_media|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_online_store|node|book|form';
  $field_group->group_name = 'group_online_store';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_right';
  $field_group->data = array(
    'label' => 'Online Store',
    'weight' => '14',
    'children' => array(
      0 => 'field_online_store',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-online-store field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_online_store|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relatedresources|node|book|form';
  $field_group->group_name = 'group_relatedresources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_right';
  $field_group->data = array(
    'label' => 'Related resources',
    'weight' => '13',
    'children' => array(
      0 => 'field_related_resources',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-relatedresources field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_relatedresources|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_research_contents|node|book|form';
  $field_group->group_name = 'group_research_contents';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_horizontal';
  $field_group->data = array(
    'label' => 'Research',
    'weight' => '52',
    'children' => array(
      0 => 'field_research',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Research',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_research_contents|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|book|form';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_related_resources';
  $field_group->data = array(
    'label' => 'right horizontal',
    'weight' => '12',
    'children' => array(
      0 => 'group_relatedresources',
      1 => 'group_online_store',
      2 => 'group_simple_link',
      3 => 'group_workshops',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-right field-group-htabs',
      ),
    ),
  );
  $export['group_right|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_simple_link|node|book|form';
  $field_group->group_name = 'group_simple_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_right';
  $field_group->data = array(
    'label' => 'Simple link',
    'weight' => '15',
    'children' => array(
      0 => 'field_simple_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-simple-link field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_simple_link|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_term|node|book|form';
  $field_group->group_name = 'group_term';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_horizontal';
  $field_group->data = array(
    'label' => 'Terms & Relations',
    'weight' => '22',
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
  $export['group_term|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video_contents|node|book|form';
  $field_group->group_name = 'group_video_contents';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_horizontal';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '57',
    'children' => array(
      0 => 'field_video_gallery',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Video',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_video_contents|node|book|form'] = $field_group;

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
      0 => 'field_video_youube',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workshops|node|book|form';
  $field_group->group_name = 'group_workshops';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_right';
  $field_group->data = array(
    'label' => 'Workshops',
    'weight' => '16',
    'children' => array(
      0 => 'field_workshops',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-workshops field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_workshops|node|book|form'] = $field_group;

  return $export;
}
