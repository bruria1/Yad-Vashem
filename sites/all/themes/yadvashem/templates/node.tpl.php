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
      <?php if (!$page && $title && !$teaser): ?>
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
    hide($content['field_artifacts_images']);
    hide($content['field_gallery_type']);
    print render($content);
  ?>

<?php
  if (($teaser) && ($node->type == "artifacts_gallery_arts")){
    $img_url = $node->field_artifacts_images['und'][0]['uri'];?>
    <div class="field-name-field-artifacts-images"><img title="<?php print $node->field_artifacts_images['und'][0]['title']?>" src="<?php print image_style_url("medium", $img_url); ?>" /></div>
    <?php print render($content['field_gallery_type']);?>
    <a class="title" href="<?php print $node_url; ?>"><?php print $node->field_artifacts_images['und'][0]['title'];?></a>
  <?php } 
?>

  <?php     
  if (($teaser) && (!($node->type == "artifacts_gallery_arts"))){?>
    <div class="node-type"><?php print node_type_get_name($node);?></div>
    <a class="title" href="<?php print $node_url; ?>"><?php print $node->title;?></a>
  <?php }?>

  <?php     
  if (($teaser) && ($node->type == "video_gallery")){?>
    <div class="video-sign"><img src="/sites/all/themes/yadvashem/images/video.png"></div>
  <?php } ?>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
