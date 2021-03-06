<?php
/**
 * @file
 * th_content_type_answer_.features.hierarchical_select.inc
 */

/**
 * Implements hook_hierarchical_select_default_configs().
 */
function th_content_type_answer__hierarchical_select_default_configs() {
$configs = array();
$config = array(
  'config_id'       => 'taxonomy-2',
  'save_lineage'    => 1,
  'enforce_deepest' => 0,
  'entity_count'    => 0,
  'require_entity'  => 0,
  'resizable'       => 0,
  'level_labels' => array(
    'status' => 1,
    'labels' => array(
      0 => '- Category -',
      1 => '- Issue -',
    ),
  ),
  'dropbox' => array(
    'status'    => 1,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
      0 => '',
      1 => '',
    ),
    'allowed_levels' => array(
      0 => 1,
      1 => 1,
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 1,
  ),
);

$configs['taxonomy-2'] = $config;
return $configs;
}
