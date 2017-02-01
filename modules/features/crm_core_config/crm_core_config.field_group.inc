<?php
/**
 * @file
 * crm_core_config.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crm_core_config_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|crm_core_contact|individual|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'individual';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '5',
    'children' => array(
      0 => 'field_cell',
      1 => 'field_signal',
      2 => 'field_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contact|crm_core_contact|individual|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|crm_core_contact|individual|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'individual';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '5',
    'children' => array(
      0 => 'field_cell',
      1 => 'field_signal',
      2 => 'field_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contact|crm_core_contact|individual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|crm_core_contact|us_representative|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'us_representative';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '4',
    'children' => array(
      0 => 'field_email',
      1 => 'field_district_phone',
      2 => 'field_dc_phone',
      3 => 'field_additional_district_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contact|crm_core_contact|us_representative|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|crm_core_contact|us_senator|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'us_senator';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '3',
    'children' => array(
      0 => 'field_email',
      1 => 'field_district_phone',
      2 => 'field_dc_phone',
      3 => 'field_additional_district_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contact|crm_core_contact|us_senator|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus|crm_core_contact|individual|default';
  $field_group->group_name = 'group_focus';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'individual';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Focus',
    'weight' => '3',
    'children' => array(
      0 => 'field_issues',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-focus field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_focus|crm_core_contact|individual|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_office_hours|crm_core_contact|individual|default';
  $field_group->group_name = 'group_office_hours';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'individual';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Office hours',
    'weight' => '4',
    'children' => array(
      0 => 'field_day',
      1 => 'field_hour',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-office-hours field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_office_hours|crm_core_contact|individual|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_office_hours|crm_core_contact|individual|form';
  $field_group->group_name = 'group_office_hours';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'individual';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Office hours',
    'weight' => '4',
    'children' => array(
      0 => 'field_day',
      1 => 'field_hour',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-office-hours field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_office_hours|crm_core_contact|individual|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pgp|crm_core_contact|individual|default';
  $field_group->group_name = 'group_pgp';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'individual';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'PGP',
    'weight' => '6',
    'children' => array(
      0 => 'field_pgp_public_key',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pgp field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pgp|crm_core_contact|individual|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pgp|crm_core_contact|individual|form';
  $field_group->group_name = 'group_pgp';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'individual';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'PGP',
    'weight' => '6',
    'children' => array(
      0 => 'field_pgp_public_key',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pgp field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pgp|crm_core_contact|individual|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  t('Focus');
  t('Office hours');
  t('PGP');

  return $field_groups;
}
