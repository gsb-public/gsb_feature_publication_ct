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
  $field_group->identifier = 'group_alumni_name|node|publication|form';
  $field_group->group_name = 'group_alumni_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_alumni_story';
  $field_group->data = array(
    'label' => 'Alumni Name',
    'weight' => '7',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_middle_name',
      3 => 'field_salutation',
      4 => 'field_year',
      5 => 'field_program_single',
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
  $export['group_alumni_name|node|publication|form'] = $field_group;

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
    'label' => 'Alumni story',
    'weight' => '14',
    'children' => array(
      0 => 'field_alumni_story',
      1 => 'group_alumni_name',
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
  $export['group_alumni_story|node|publication|form'] = $field_group;

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
      0 => 'field_link_single',
      1 => 'field_file_single_public',
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
    'weight' => '6',
    'children' => array(
      0 => 'field_year_of_publication',
      1 => 'field_pub_month_day',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Publication date',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_publication_date|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publication_details|node|publication|default';
  $field_group->group_name = 'group_publication_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication details',
    'weight' => '4',
    'children' => array(
      0 => 'field_issue_number',
      1 => 'field_link_website',
      2 => 'field_pages',
      3 => 'field_volume_number',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Publication details',
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
  $export['group_publication_details|node|publication|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publication_details|node|publication|form';
  $field_group->group_name = 'group_publication_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication details',
    'weight' => '7',
    'children' => array(
      0 => 'field_page_count',
      1 => 'field_issue_number',
      2 => 'field_volume_number',
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
  $export['group_publication_details|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags_wrapper|node|publication|business_insight';
  $field_group->group_name = 'group_tags_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'business_insight';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags:',
    'weight' => '15',
    'children' => array(
      0 => 'field_academic_area_unlimited',
      1 => 'field_business_insight_topic',
      2 => 'field_company_organization',
      3 => 'field_discipline',
      4 => 'field_industry',
      5 => 'field_region',
      6 => 'field_tag',
      7 => 'field_target_audience',
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
    'weight' => '6',
    'children' => array(
      0 => 'field_academic_area_unlimited',
      1 => 'field_business_insight_topic',
      2 => 'field_company_organization',
      3 => 'field_discipline',
      4 => 'field_industry',
      5 => 'field_region',
      6 => 'field_tag',
      7 => 'field_target_audience',
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
    'weight' => '6',
    'children' => array(
      0 => 'field_academic_area_unlimited',
      1 => 'field_business_insight_topic',
      2 => 'field_company_organization',
      3 => 'field_discipline',
      4 => 'field_industry',
      5 => 'field_region',
      6 => 'field_tag',
      7 => 'field_target_audience',
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
  $field_group->identifier = 'group_taxonomy|node|publication|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '13',
    'children' => array(
      0 => 'group_vtab_acad_areas',
      1 => 'group_vtab_company',
      2 => 'group_vtab_industry',
      3 => 'group_vtab_region',
      4 => 'group_vtab_topics',
      5 => 'group_vtab_center',
      6 => 'group_vtab_tag',
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
  $field_group->identifier = 'group_vtab_acad_areas|node|publication|form';
  $field_group->group_name = 'group_vtab_acad_areas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Academic Areas',
    'weight' => '29',
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
  $export['group_vtab_acad_areas|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_center|node|publication|form';
  $field_group->group_name = 'group_vtab_center';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Centers',
    'weight' => '32',
    'children' => array(
      0 => 'field_centers_research_programs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Centers',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_vtab_center|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_company|node|publication|form';
  $field_group->group_name = 'group_vtab_company';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Company',
    'weight' => '30',
    'children' => array(
      0 => 'field_company_organization',
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
  $export['group_vtab_company|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_industry|node|publication|form';
  $field_group->group_name = 'group_vtab_industry';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Industry',
    'weight' => '31',
    'children' => array(
      0 => 'field_industry',
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
  $export['group_vtab_industry|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_region|node|publication|form';
  $field_group->group_name = 'group_vtab_region';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'BI Regions',
    'weight' => '28',
    'children' => array(
      0 => 'field_region',
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
  $export['group_vtab_region|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_tag|node|publication|form';
  $field_group->group_name = 'group_vtab_tag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '33',
    'children' => array(
      0 => 'field_tag',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Tags',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_vtab_tag|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_topics|node|publication|form';
  $field_group->group_name = 'group_vtab_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Topics',
    'weight' => '27',
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
  $export['group_vtab_topics|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_name|field_collection_item|field_person_other|default';
  $field_group->group_name = 'group_wrapper_name';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_person_other';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Name wrapper',
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
  $export['group_wrapper_name|field_collection_item|field_person_other|default'] = $field_group;

  return $export;
}
