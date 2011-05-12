<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_newsletter_user_default_roles() {
  $roles = array();

  // Exported role: newsletter administrator
  $roles['newsletter administrator'] = array(
    'name' => 'newsletter administrator',
  );

  // Exported role: newsletter writer
  $roles['newsletter writer'] = array(
    'name' => 'newsletter writer',
  );

  return $roles;
}
