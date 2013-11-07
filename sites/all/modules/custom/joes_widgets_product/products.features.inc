<?php
/**
 * @file
 * products.features.inc
 */

/**
 * Implements hook_views_api().
 */
function products_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function products_node_info() {
  $items = array(
    'products' => array(
      'name' => t('Products'),
      'base' => 'node_content',
      'description' => t('This content type provides title, description and picture of all widgets for sale.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
