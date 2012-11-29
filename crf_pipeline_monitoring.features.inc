<?php
/**
 * @file
 * crf_pipeline_monitoring.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crf_pipeline_monitoring_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function crf_pipeline_monitoring_node_info() {
  $items = array(
    'pipeline_monitoring' => array(
      'name' => t('Pipeline Monitoring'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
