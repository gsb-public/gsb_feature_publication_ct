<?php
/**
 * @file
 * gsb_feature_publication_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_publication_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_academic_area|node|publication|form';
  $field_group->group_name = 'group_academic_area';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Academic Area',
    'weight' => '43',
    'children' => array(
      0 => 'field_academic_area_unlimited',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_academic_area|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_topics|node|publication|form';
  $field_group->group_name = 'group_additional_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Additional Topics',
    'weight' => '44',
    'children' => array(
      0 => 'field_business_insight_topic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_additional_topics|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alumni_story|node|publication|form';
  $field_group->group_name = 'group_alumni_story';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alumni/Past Participant Mention',
    'weight' => '15',
    'children' => array(
      0 => 'field_alumni_story',
      1 => 'field_program_unlimited',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Alumni/Past Participant Mention',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_alumni_story|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_centers|node|publication|form';
  $field_group->group_name = 'group_centers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Centers',
    'weight' => '46',
    'children' => array(
      0 => 'field_centers_research_programs',
      1 => 'field_circle_topics',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_centers|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pub_link_pdf|node|publication|form';
  $field_group->group_name = 'group_pub_link_pdf';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication Link/PDF',
    'weight' => '11',
    'children' => array(
      0 => 'field_file_single_public',
      1 => 'field_link_single',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Publication Link/PDF',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Enter a link to <strong>or</strong> upload a PDF of the publication. ',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_pub_link_pdf|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publication_date|node|publication|form';
  $field_group->group_name = 'group_publication_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication date',
    'weight' => '10',
    'children' => array(
      0 => 'field_pub_date_day',
      1 => 'field_year_of_publication',
      2 => 'field_month',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Publication date',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_publication_date|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_regions_of_interest|node|publication|form';
  $field_group->group_name = 'group_regions_of_interest';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Regions of Interest',
    'weight' => '45',
    'children' => array(
      0 => 'field_region_of_interest',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_regions_of_interest|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|publication|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '13',
    'children' => array(
      0 => 'field_file_unlimited_public',
      1 => 'field_link_unlimited',
      2 => 'field_related_idea_story',
      3 => 'field_related_other_unlimited',
      4 => 'field_person_ref_unlimited',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_content|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags_wrapper|node|publication|business_insight';
  $field_group->group_name = 'group_tags_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'business_insight';
  $field_group->parent_name = '';
  $field_group->data = array();
  $export['group_tags_wrapper|node|publication|business_insight'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags_wrapper|node|publication|default';
  $field_group->group_name = 'group_tags_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags:',
    'weight' => '14',
    'children' => array(),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Tags:',
      'instance_settings' => array(
        'classes' => '',
        'show_label' => 1,
        'label_element' => 'h3',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tags_wrapper|node|publication|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags_wrapper|node|publication|teaser';
  $field_group->group_name = 'group_tags_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags:',
    'weight' => '30',
    'children' => array(
      0 => 'field_academic_area_unlimited',
      1 => 'field_business_insight_topic',
      2 => 'field_tag',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Tags:',
      'instance_settings' => array(
        'classes' => '',
        'show_label' => 1,
        'label_element' => 'h3',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tags_wrapper|node|publication|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|publication|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '47',
    'children' => array(
      0 => 'field_tag',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tags|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|publication|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tagging',
    'weight' => '16',
    'children' => array(
      0 => 'group_academic_area',
      1 => 'group_additional_topics',
      2 => 'group_centers',
      3 => 'group_regions_of_interest',
      4 => 'group_tags',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_taxonomy|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_commas|node|publication|compact';
  $field_group->group_name = 'group_wrapper_commas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'compact';
  $field_group->parent_name = 'group_wrapper_published';
  $field_group->data = array(
    'label' => 'Publication commas',
    'weight' => '7',
    'children' => array(
      0 => 'field_issue_number',
      1 => 'field_page_count',
      2 => 'field_pub_date_day',
      3 => 'field_volume_number',
      4 => 'field_year_of_publication',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Publication commas',
      'instance_settings' => array(
        'item_count' => '0',
        'classes' => 'group-wrapper-commas field-group-fieldset',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_commas|node|publication|compact'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_commas|node|publication|default';
  $field_group->group_name = 'group_wrapper_commas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_wrapper_published';
  $field_group->data = array(
    'label' => 'Publication commas',
    'weight' => '8',
    'children' => array(
      0 => 'field_issue_number',
      1 => 'field_page_count',
      2 => 'field_pub_date_day',
      3 => 'field_volume_number',
      4 => 'field_year_of_publication',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Publication commas',
      'instance_settings' => array(
        'item_count' => '0',
        'classes' => 'group-wrapper-commas',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_commas|node|publication|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_commas|node|publication|expanded';
  $field_group->group_name = 'group_wrapper_commas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'expanded';
  $field_group->parent_name = 'group_wrapper_published';
  $field_group->data = array(
    'label' => 'Publication commas',
    'weight' => '7',
    'children' => array(
      0 => 'field_issue_number',
      1 => 'field_page_count',
      2 => 'field_pub_date_day',
      3 => 'field_volume_number',
      4 => 'field_year_of_publication',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Publication commas',
      'instance_settings' => array(
        'item_count' => '0',
        'classes' => 'group-wrapper-commas field-group-fieldset',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_commas|node|publication|expanded'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_commas|node|publication|teaser_listing';
  $field_group->group_name = 'group_wrapper_commas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'teaser_listing';
  $field_group->parent_name = 'group_wrapper_published';
  $field_group->data = array(
    'label' => 'Publication commas',
    'weight' => '7',
    'children' => array(
      0 => 'field_issue_number',
      1 => 'field_page_count',
      2 => 'field_pub_date_day',
      3 => 'field_volume_number',
      4 => 'field_year_of_publication',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Publication commas',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-commas field-group-fieldset',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_commas|node|publication|teaser_listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_commas|node|publication|views_content_pane';
  $field_group->group_name = 'group_wrapper_commas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'views_content_pane';
  $field_group->parent_name = 'group_wrapper_published';
  $field_group->data = array(
    'label' => 'Publication commas',
    'weight' => '8',
    'children' => array(
      0 => 'field_issue_number',
      1 => 'field_page_count',
      2 => 'field_pub_date_day',
      3 => 'field_volume_number',
      4 => 'field_year_of_publication',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'show_label' => 1,
        'label_element' => 'h3',
        'classes' => '',
      ),
    ),
  );
  $export['group_wrapper_commas|node|publication|views_content_pane'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_date|node|publication|insight_featured_card';
  $field_group->group_name = 'group_wrapper_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'insight_featured_card';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_pub_date_day',
      1 => 'field_year_of_publication',
      2 => 'field_month',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Date wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_date|node|publication|insight_featured_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_featured|node|publication|views_content_pane';
  $field_group->group_name = 'group_wrapper_featured';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'views_content_pane';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_authors',
      1 => 'group_wrapper_published',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Featured wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_featured|node|publication|views_content_pane'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_links|node|publication|default';
  $field_group->group_name = 'group_wrapper_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication links',
    'weight' => '4',
    'children' => array(
      0 => 'field_file_single_public',
      1 => 'field_link_single',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Publication links',
      'instance_settings' => array(
        'classes' => 'field-group-format group_wrapper_links field-group-div group-wrapper-links',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_links|node|publication|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_name|field_collection_item|field_person_other|default';
  $field_group->group_name = 'group_wrapper_name';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_person_other';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array();
  $export['group_wrapper_name|field_collection_item|field_person_other|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_published|node|publication|compact';
  $field_group->group_name = 'group_wrapper_published';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'compact';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Published info',
    'weight' => '4',
    'children' => array(
      0 => 'field_place_of_publication',
      1 => 'field_pub_book_title',
      2 => 'field_publisher',
      3 => 'field_month',
      4 => 'group_wrapper_commas',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Published info',
      'instance_settings' => array(
        'classes' => 'field-group-format group_wrapper_published field-group-div group-wrapper-published',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_published|node|publication|compact'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_published|node|publication|default';
  $field_group->group_name = 'group_wrapper_published';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Published info',
    'weight' => '2',
    'children' => array(
      0 => 'field_place_of_publication',
      1 => 'field_pub_book_title',
      2 => 'field_publisher',
      3 => 'field_month',
      4 => 'group_wrapper_commas',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Published info',
      'instance_settings' => array(
        'classes' => 'field-group-format group_wrapper_published field-group-div group-wrapper-published',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_published|node|publication|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_published|node|publication|expanded';
  $field_group->group_name = 'group_wrapper_published';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'expanded';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Published info',
    'weight' => '4',
    'children' => array(
      0 => 'field_place_of_publication',
      1 => 'field_pub_book_title',
      2 => 'field_publisher',
      3 => 'field_month',
      4 => 'group_wrapper_commas',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Published info',
      'instance_settings' => array(
        'classes' => 'field-group-format group_wrapper_published field-group-div group-wrapper-published',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_published|node|publication|expanded'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_published|node|publication|teaser_listing';
  $field_group->group_name = 'group_wrapper_published';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'teaser_listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Published info',
    'weight' => '2',
    'children' => array(
      0 => 'field_place_of_publication',
      1 => 'field_pub_book_title',
      2 => 'field_publisher',
      3 => 'field_month',
      4 => 'group_wrapper_commas',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Published info',
      'instance_settings' => array(
        'classes' => 'field-group-format group_wrapper_published field-group-div group-wrapper-published',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_published|node|publication|teaser_listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_published|node|publication|views_content_pane';
  $field_group->group_name = 'group_wrapper_published';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'views_content_pane';
  $field_group->parent_name = 'group_wrapper_featured';
  $field_group->data = array(
    'label' => 'Published info',
    'weight' => '3',
    'children' => array(
      0 => 'field_place_of_publication',
      1 => 'field_pub_book_title',
      2 => 'field_publisher',
      3 => 'field_month',
      4 => 'group_wrapper_commas',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Published info',
      'instance_settings' => array(
        'classes' => 'field-group-format group_wrapper_published field-group-div group-wrapper-published',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_published|node|publication|views_content_pane'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_related|node|publication|default';
  $field_group->group_name = 'group_wrapper_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related',
    'weight' => '6',
    'children' => array(
      0 => 'field_file_unlimited_public',
      1 => 'field_link_unlimited',
      2 => 'field_related_idea_story',
      3 => 'field_related_other_unlimited',
      4 => 'field_person_ref_unlimited',
      5 => 'gsb_feature_base_fields_faculty_authors',
      6 => 'related_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Related',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_wrapper_related|node|publication|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_title|node|publication|compact';
  $field_group->group_name = 'group_wrapper_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'compact';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_publication_type',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_title|node|publication|compact'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_title|node|publication|expanded';
  $field_group->group_name = 'group_wrapper_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'expanded';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_publication_type',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_title|node|publication|expanded'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_topics|node|publication|default';
  $field_group->group_name = 'group_wrapper_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topics',
    'weight' => '3',
    'children' => array(
      0 => 'field_academic_area_unlimited',
      1 => 'field_business_insight_topic',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Topics',
      'instance_settings' => array(
        'item_count' => '0',
        'classes' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_topics|node|publication|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_topics|node|publication|teaser_listing';
  $field_group->group_name = 'group_wrapper_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'teaser_listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topics',
    'weight' => '12',
    'children' => array(
      0 => 'field_academic_area_unlimited',
      1 => 'field_business_insight_topic',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Topics',
      'instance_settings' => array(
        'item_count' => '0',
        'classes' => 'group-wrapper-topics field-group-fieldset',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_topics|node|publication|teaser_listing'] = $field_group;

  return $export;
}
