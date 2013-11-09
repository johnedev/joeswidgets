<?php
/**
 * @file
 * joes_widgets_products.features.inc
 */

/**
 * Implements hook_views_api().
 */
function joes_widgets_products_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function joes_widgets_products_node_info() {
  $items = array(
    'joes_widgets_products' => array(
      'name' => t('joes_widgets_products'),
      'base' => 'node_content',
      'description' => t('This content type provides title, description and picture of all widgets for sale.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
