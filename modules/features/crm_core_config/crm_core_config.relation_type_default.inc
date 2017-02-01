<?php
/**
 * @file
 * crm_core_config.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function crm_core_config_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'constituent';
  $relation_type->label = 'Constituent of';
  $relation_type->reverse_label = 'Representative of';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'crm_core_contact:individual',
  );
  $relation_type->target_bundles = array(
    0 => 'crm_core_contact:us_senator',
    1 => 'crm_core_contact:us_representative',
  );
  $export['constituent'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'crm_core_user_sync';
  $relation_type->label = 'Contact';
  $relation_type->reverse_label = 'User';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'user:user',
  );
  $relation_type->target_bundles = array(
    0 => 'crm_core_contact:*',
  );
  $export['crm_core_user_sync'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'member';
  $relation_type->label = 'Member of';
  $relation_type->reverse_label = 'Member';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'crm_core_contact:us_senator',
    1 => 'crm_core_contact:us_representative',
  );
  $relation_type->target_bundles = array(
    0 => 'crm_core_contact:committee',
  );
  $export['member'] = $relation_type;

  return $export;
}
