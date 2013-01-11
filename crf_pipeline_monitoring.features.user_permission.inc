<?php
/**
 * @file
 * crf_pipeline_monitoring.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crf_pipeline_monitoring_user_default_permissions() {
  $permissions = array();

  // Exported permission: create pipeline_monitoring content.
  $permissions['create pipeline_monitoring content'] = array(
    'name' => 'create pipeline_monitoring content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any pipeline_monitoring content.
  $permissions['delete any pipeline_monitoring content'] = array(
    'name' => 'delete any pipeline_monitoring content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own pipeline_monitoring content.
  $permissions['delete own pipeline_monitoring content'] = array(
    'name' => 'delete own pipeline_monitoring content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any pipeline_monitoring content.
  $permissions['edit any pipeline_monitoring content'] = array(
    'name' => 'edit any pipeline_monitoring content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own pipeline_monitoring content.
  $permissions['edit own pipeline_monitoring content'] = array(
    'name' => 'edit own pipeline_monitoring content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: view any unpublished pipeline_monitoring content.
  $permissions['view any unpublished pipeline_monitoring content'] = array(
    'name' => 'view any unpublished pipeline_monitoring content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
