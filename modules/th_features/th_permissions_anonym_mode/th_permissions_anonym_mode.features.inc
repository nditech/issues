<?php
/**
 * @file
 * th_permissions_anonym_mode.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function th_permissions_anonym_mode_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
