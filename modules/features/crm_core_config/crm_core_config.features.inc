<?php
/**
 * @file
 * crm_core_config.features.inc
 */

/**
 * Implements hook_default_crm_core_activity_type().
 */
function crm_core_config_default_crm_core_activity_type() {
  $items = array();
  $items['meeting'] = entity_import('crm_core_activity_type', '{
    "type" : "meeting",
    "label" : "Meeting",
    "weight" : 0,
    "activity_string" : "",
    "description" : "A meeting between 2 or more contacts",
    "rdf_mapping" : []
  }');
  $items['phone_call'] = entity_import('crm_core_activity_type', '{
    "type" : "phone_call",
    "label" : "Phone call",
    "weight" : 0,
    "activity_string" : "",
    "description" : "A phone call between 2 or more contacts",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_crm_core_contact_type().
 */
function crm_core_config_default_crm_core_contact_type() {
  $items = array();
  $items['committee'] = entity_import('crm_core_contact_type', '{
    "type" : "committee",
    "label" : null,
    "weight" : 0,
    "primary_fields" : { "email" : "", "address" : "", "phone" : "" },
    "name" : "Committee",
    "description" : "A senate or congressional committee.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "1",
    "rdf_mapping" : []
  }');
  $items['individual'] = entity_import('crm_core_contact_type', '{
    "type" : "individual",
    "label" : null,
    "weight" : 0,
    "primary_fields" : { "email" : "field_email", "address" : "", "phone" : "field_cell" },
    "name" : "Individual",
    "description" : "A single individual.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "1",
    "rdf_mapping" : []
  }');
  $items['organization'] = entity_import('crm_core_contact_type', '{
    "type" : "organization",
    "label" : null,
    "weight" : 0,
    "primary_fields" : null,
    "name" : "Organization",
    "description" : "A collection of individuals or other organizations that has additional contact data.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "1",
    "rdf_mapping" : []
  }');
  $items['us_representative'] = entity_import('crm_core_contact_type', '{
    "type" : "us_representative",
    "label" : null,
    "weight" : 0,
    "primary_fields" : {
      "email" : "field_email",
      "address" : "",
      "phone" : "field_district_phone"
    },
    "name" : "US Representative",
    "description" : "",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "0",
    "rdf_mapping" : []
  }');
  $items['us_senator'] = entity_import('crm_core_contact_type', '{
    "type" : "us_senator",
    "label" : null,
    "weight" : 0,
    "primary_fields" : {
      "email" : "field_email",
      "address" : "",
      "phone" : "field_district_phone"
    },
    "name" : "US Senator",
    "description" : "",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function crm_core_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crm_core_config_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_name_default_formats().
 */
function crm_core_config_name_default_formats() {
  $formats = array();

  // Exported format: CRM Core Contact label format
  $formats['crm_core_contact_label_format'] = array(
    'name' => 'CRM Core Contact label format',
    'machine_name' => 'crm_core_contact_label_format',
    'format' => '((((t+ig)+im)+if)+is)+jc',
  );

  // Exported format: Default
  $formats['default'] = array(
    'default_format' => '((((t+ig)+im)+if)+is)+jc',
    'sep1' => ' ',
    'sep2' => ', ',
    'sep3' => '',
    'machine_name' => 'default',
    'name' => 'Default',
  );

  // Exported format: Family
  $formats['family'] = array(
    'name' => 'Family',
    'machine_name' => 'family',
    'format' => 'f',
  );

  // Exported format: Title Family
  $formats['formal'] = array(
    'name' => 'Title Family',
    'machine_name' => 'formal',
    'format' => 't+if',
  );

  // Exported format: Full
  $formats['full'] = array(
    'name' => 'Full',
    'machine_name' => 'full',
    'format' => '((((t+ig)+im)+if)+is)+jc',
  );

  // Exported format: Given
  $formats['given'] = array(
    'name' => 'Given',
    'machine_name' => 'given',
    'format' => 'g',
  );

  // Exported format: Given Family
  $formats['short_full'] = array(
    'name' => 'Given Family',
    'machine_name' => 'short_full',
    'format' => 'g+if',
  );

  return $formats;
}
