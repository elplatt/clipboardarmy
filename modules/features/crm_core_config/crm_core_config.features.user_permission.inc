<?php
/**
 * @file
 * crm_core_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crm_core_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer activity types'.
  $permissions['administer activity types'] = array(
    'name' => 'administer activity types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'administer contact relationship types'.
  $permissions['administer contact relationship types'] = array(
    'name' => 'administer contact relationship types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'administer contact types'.
  $permissions['administer contact types'] = array(
    'name' => 'administer contact types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'administer crm-core settings'.
  $permissions['administer crm-core settings'] = array(
    'name' => 'administer crm-core settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_ui',
  );

  // Exported permission: 'administer crm_core_activity entities'.
  $permissions['administer crm_core_activity entities'] = array(
    'name' => 'administer crm_core_activity entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'administer crm_core_contact entities'.
  $permissions['administer crm_core_contact entities'] = array(
    'name' => 'administer crm_core_contact entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'administer user-sync'.
  $permissions['administer user-sync'] = array(
    'name' => 'administer user-sync',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_user_sync',
  );

  // Exported permission: 'create crm_core_activity entities'.
  $permissions['create crm_core_activity entities'] = array(
    'name' => 'create crm_core_activity entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'create crm_core_activity entities of bundle meeting'.
  $permissions['create crm_core_activity entities of bundle meeting'] = array(
    'name' => 'create crm_core_activity entities of bundle meeting',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'create crm_core_activity entities of bundle phone_call'.
  $permissions['create crm_core_activity entities of bundle phone_call'] = array(
    'name' => 'create crm_core_activity entities of bundle phone_call',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'create crm_core_contact entities'.
  $permissions['create crm_core_contact entities'] = array(
    'name' => 'create crm_core_contact entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create crm_core_contact entities of bundle committee'.
  $permissions['create crm_core_contact entities of bundle committee'] = array(
    'name' => 'create crm_core_contact entities of bundle committee',
    'roles' => array(),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create crm_core_contact entities of bundle individual'.
  $permissions['create crm_core_contact entities of bundle individual'] = array(
    'name' => 'create crm_core_contact entities of bundle individual',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create crm_core_contact entities of bundle organization'.
  $permissions['create crm_core_contact entities of bundle organization'] = array(
    'name' => 'create crm_core_contact entities of bundle organization',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create crm_core_contact entities of bundle us_representative'.
  $permissions['create crm_core_contact entities of bundle us_representative'] = array(
    'name' => 'create crm_core_contact entities of bundle us_representative',
    'roles' => array(),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create crm_core_contact entities of bundle us_senator'.
  $permissions['create crm_core_contact entities of bundle us_senator'] = array(
    'name' => 'create crm_core_contact entities of bundle us_senator',
    'roles' => array(),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create relation entities of any contact relationship'.
  $permissions['create relation entities of any contact relationship'] = array(
    'name' => 'create relation entities of any contact relationship',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'create relation entities of bundle constituent'.
  $permissions['create relation entities of bundle constituent'] = array(
    'name' => 'create relation entities of bundle constituent',
    'roles' => array(),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'create relation entities of bundle member'.
  $permissions['create relation entities of bundle member'] = array(
    'name' => 'create relation entities of bundle member',
    'roles' => array(),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'delete any crm_core_activity entity of bundle meeting'.
  $permissions['delete any crm_core_activity entity of bundle meeting'] = array(
    'name' => 'delete any crm_core_activity entity of bundle meeting',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'delete any crm_core_activity entity of bundle phone_call'.
  $permissions['delete any crm_core_activity entity of bundle phone_call'] = array(
    'name' => 'delete any crm_core_activity entity of bundle phone_call',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'delete any crm_core_contact entity of bundle committee'.
  $permissions['delete any crm_core_contact entity of bundle committee'] = array(
    'name' => 'delete any crm_core_contact entity of bundle committee',
    'roles' => array(),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'delete any crm_core_contact entity of bundle individual'.
  $permissions['delete any crm_core_contact entity of bundle individual'] = array(
    'name' => 'delete any crm_core_contact entity of bundle individual',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'delete any crm_core_contact entity of bundle organization'.
  $permissions['delete any crm_core_contact entity of bundle organization'] = array(
    'name' => 'delete any crm_core_contact entity of bundle organization',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'delete any crm_core_contact entity of bundle us_representative'.
  $permissions['delete any crm_core_contact entity of bundle us_representative'] = array(
    'name' => 'delete any crm_core_contact entity of bundle us_representative',
    'roles' => array(),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'delete any crm_core_contact entity of bundle us_senator'.
  $permissions['delete any crm_core_contact entity of bundle us_senator'] = array(
    'name' => 'delete any crm_core_contact entity of bundle us_senator',
    'roles' => array(),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'delete any relation entity of bundle constituent'.
  $permissions['delete any relation entity of bundle constituent'] = array(
    'name' => 'delete any relation entity of bundle constituent',
    'roles' => array(),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'delete any relation entity of bundle member'.
  $permissions['delete any relation entity of bundle member'] = array(
    'name' => 'delete any relation entity of bundle member',
    'roles' => array(),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'edit any crm_core_activity entity'.
  $permissions['edit any crm_core_activity entity'] = array(
    'name' => 'edit any crm_core_activity entity',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'edit any crm_core_activity entity of bundle meeting'.
  $permissions['edit any crm_core_activity entity of bundle meeting'] = array(
    'name' => 'edit any crm_core_activity entity of bundle meeting',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'edit any crm_core_activity entity of bundle phone_call'.
  $permissions['edit any crm_core_activity entity of bundle phone_call'] = array(
    'name' => 'edit any crm_core_activity entity of bundle phone_call',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'edit any crm_core_contact entity'.
  $permissions['edit any crm_core_contact entity'] = array(
    'name' => 'edit any crm_core_contact entity',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any crm_core_contact entity of bundle committee'.
  $permissions['edit any crm_core_contact entity of bundle committee'] = array(
    'name' => 'edit any crm_core_contact entity of bundle committee',
    'roles' => array(),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any crm_core_contact entity of bundle individual'.
  $permissions['edit any crm_core_contact entity of bundle individual'] = array(
    'name' => 'edit any crm_core_contact entity of bundle individual',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any crm_core_contact entity of bundle organization'.
  $permissions['edit any crm_core_contact entity of bundle organization'] = array(
    'name' => 'edit any crm_core_contact entity of bundle organization',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any crm_core_contact entity of bundle us_representative'.
  $permissions['edit any crm_core_contact entity of bundle us_representative'] = array(
    'name' => 'edit any crm_core_contact entity of bundle us_representative',
    'roles' => array(),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any crm_core_contact entity of bundle us_senator'.
  $permissions['edit any crm_core_contact entity of bundle us_senator'] = array(
    'name' => 'edit any crm_core_contact entity of bundle us_senator',
    'roles' => array(),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any relation entity of bundle constituent'.
  $permissions['edit any relation entity of bundle constituent'] = array(
    'name' => 'edit any relation entity of bundle constituent',
    'roles' => array(),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'edit any relation entity of bundle member'.
  $permissions['edit any relation entity of bundle member'] = array(
    'name' => 'edit any relation entity of bundle member',
    'roles' => array(),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'edit own contact information'.
  $permissions['edit own contact information'] = array(
    'name' => 'edit own contact information',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'crm_core_user_sync',
  );

  // Exported permission: 'edit relation entities of any contact relationship'.
  $permissions['edit relation entities of any contact relationship'] = array(
    'name' => 'edit relation entities of any contact relationship',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'revert contact record'.
  $permissions['revert contact record'] = array(
    'name' => 'revert contact record',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any crm_core_activity entity'.
  $permissions['view any crm_core_activity entity'] = array(
    'name' => 'view any crm_core_activity entity',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'view any crm_core_activity entity of bundle meeting'.
  $permissions['view any crm_core_activity entity of bundle meeting'] = array(
    'name' => 'view any crm_core_activity entity of bundle meeting',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'view any crm_core_activity entity of bundle phone_call'.
  $permissions['view any crm_core_activity entity of bundle phone_call'] = array(
    'name' => 'view any crm_core_activity entity of bundle phone_call',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'view any crm_core_contact entity'.
  $permissions['view any crm_core_contact entity'] = array(
    'name' => 'view any crm_core_contact entity',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any crm_core_contact entity of bundle committee'.
  $permissions['view any crm_core_contact entity of bundle committee'] = array(
    'name' => 'view any crm_core_contact entity of bundle committee',
    'roles' => array(),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any crm_core_contact entity of bundle individual'.
  $permissions['view any crm_core_contact entity of bundle individual'] = array(
    'name' => 'view any crm_core_contact entity of bundle individual',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any crm_core_contact entity of bundle organization'.
  $permissions['view any crm_core_contact entity of bundle organization'] = array(
    'name' => 'view any crm_core_contact entity of bundle organization',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any crm_core_contact entity of bundle us_representative'.
  $permissions['view any crm_core_contact entity of bundle us_representative'] = array(
    'name' => 'view any crm_core_contact entity of bundle us_representative',
    'roles' => array(),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any crm_core_contact entity of bundle us_senator'.
  $permissions['view any crm_core_contact entity of bundle us_senator'] = array(
    'name' => 'view any crm_core_contact entity of bundle us_senator',
    'roles' => array(),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any relation entity of bundle constituent'.
  $permissions['view any relation entity of bundle constituent'] = array(
    'name' => 'view any relation entity of bundle constituent',
    'roles' => array(),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'view any relation entity of bundle member'.
  $permissions['view any relation entity of bundle member'] = array(
    'name' => 'view any relation entity of bundle member',
    'roles' => array(),
    'module' => 'crm_core_relationship',
  );

  // Exported permission: 'view crm dashboard'.
  $permissions['view crm dashboard'] = array(
    'name' => 'view crm dashboard',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'crm_core_ui',
  );

  // Exported permission: 'view crm report index'.
  $permissions['view crm report index'] = array(
    'name' => 'view crm report index',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_report',
  );

  // Exported permission: 'view disabled contact types'.
  $permissions['view disabled contact types'] = array(
    'name' => 'view disabled contact types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view relation entities of any contact relationship'.
  $permissions['view relation entities of any contact relationship'] = array(
    'name' => 'view relation entities of any contact relationship',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'crm_core_relationship',
  );

  return $permissions;
}
