<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_newsletter_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_newsletter';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'menu' => '-1',
    'path' => '3',
  );

  $export['content_extra_weights_ca_newsletter'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_newsletter';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_newsletter'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_newsletter_pattern';
  $strongarm->value = 'newsletter/[title-raw]';

  $export['pathauto_node_ca_newsletter_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ca_newsletter_list_template';
  $strongarm->value = 'ca_newsletter_list_template_one';

  $export['ca_newsletter_list_template'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ca_newsletter_node_template';
  $strongarm->value = 'ca_newsletter_node_template_one';

  $export['ca_newsletter_node_template'] = $strongarm;
  return $export;
}
