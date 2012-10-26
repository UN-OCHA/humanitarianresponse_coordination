<?php
/**
 * @file
 * humanitarianresponse_coordination.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_coordination_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer coordination_hubs vocabulary terms.
  $permissions['administer coordination_hubs vocabulary terms'] = array(
    'name' => 'administer coordination_hubs vocabulary terms',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'vppr',
  );

  // Exported permission: clear csv_coordination_hubs feeds.
  $permissions['clear csv_coordination_hubs feeds'] = array(
    'name' => 'clear csv_coordination_hubs feeds',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import csv_coordination_hubs feeds.
  $permissions['import csv_coordination_hubs feeds'] = array(
    'name' => 'import csv_coordination_hubs feeds',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: unlock csv_coordination_hubs feeds.
  $permissions['unlock csv_coordination_hubs feeds'] = array(
    'name' => 'unlock csv_coordination_hubs feeds',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
