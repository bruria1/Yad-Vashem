<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
    <header>
      <?php print render($title_prefix); ?>
      <?php if (!$page && $title): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php if ($display_submitted): ?>
        <p class="submitted">
          <?php print $user_picture; ?>
          <?php print $submitted; ?>
        </p>
      <?php endif; ?>

      <?php if ($unpublished): ?>
        <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
      <?php endif; ?>
    </header>
  <?php endif; ?>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_title']); 
    hide($content['book_navigation']); 

    ?>
    <?php global $language;
    global $base_url;
    //get the current language
    $current_lang = $language->language;
    //get the default language
    $default_language = language_default();
    ?>
    <!-- Go to www.addthis.com/dashboard to customize your tools -->
    <div class="share-links">
      <div class="addthis_sharing_toolbox"></div>
      <div class="top-links">
        <div class="print">
        <a href="<?php
  switch($current_lang) {
    case($default_language):
      $url = $base_url."/print/".$node->nid;
      break;
    default:
      $url = $base_url."/".$current_lang ."/print/".$node->nid;
      print $url;
  }?>" target="_blank">READING MODE</a>
        </div>
        <div class="printpdf">
        <a href="<?php
  switch($current_lang) {
    case($default_language):
      $url = $base_url."/printpdf/".$node->nid;
      break;
    default:
      $url = $base_url."/".$current_lang ."/printpdf/".$node->nid;
      print $url;
  }?>">Save</a>
        </div>
      </div>

      
    </div>
    <?php print render($content);
  ?>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
 <?php print render($content['book_navigation']);?>