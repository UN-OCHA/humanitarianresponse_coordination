<?php
/**
 * @file
 * humanitarianresponse_coordination.features.inc
 */

/**
 * Implements hook_views_api().
 */
function humanitarianresponse_coordination_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
