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
<h1 class="page-title">
  <?php
        if(isset($node->field_title['und'][0]['value'])) {  
                print $node->field_title['und'][0]['value'];
         }
        else{
          print $title;
         }
  ?>
</h1>
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
    hide($content['field_helpful']); 
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
    <div class="icon-social">
      <div class="addthis_sharing_toolbox"></div>
      <div class="top-links">
        <div class="reading">
          <a href="<?php
           switch($current_lang) {
           case($default_language):
              $url = $base_url."/print/".$node->nid;
            break;
           default:
              $url = $base_url."/".$current_lang ."/print/".$node->nid;
            print $url;
            }?>" target="_blank"><?php print t('Reading mode'); ?></a>
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
            }?>"><?php print t('Download'); ?></a>
        </div>
        <div class="print">
          <a href="javascript:;" onclick="window.print()">
              <?php print t('Print'); ?>
          </a>
        </div>
        <div class="save_flag">
          <?php print flag_create_link('bookmarks', $node->nid); ?>
        </div>
      </div> 
    </div>
</div>

 <div id="nerative_sub-title">
    <?php print render($content['field_sub_title']); ?>
  </div>
  <div id="nerative_qoute">
    <?php print render($content['field_teaser_qoate']); ?>
   <?php print render($content['field_quote_name']); ?>
    <?php print render($content['field_teaser_long_text']); ?>
    <?php if (render($content['body'])) { ?>
      <div class="jump_link">
       <div class="read">Read more</div>
      </div>
    <?php } ?>
  </div>

  <div id="nerative_tabs">
    <?php print render($content['field_tabs']); ?>
  </div>
  <div class="mobile-main-gallery">
        <?php
          $my_block = module_invoke('views', 'block_view', 'main_gallery_mobile-block');?>
          <?php print render($my_block['content']); 
        ?>
</div>

  <div id="nerative_body">
    <?php print render($content['body']); ?>
  </div>

 <div class="share-links">



    <div class="addthis_sharing_toolbox"></div>



    <div class="top-links">



      <div class="read">



        <a href="<?php



          switch($current_lang) {



           case($default_language):



             $url = $base_url."/print/".$node->nid;



          break;



        default:



              $url = $base_url."/".$current_lang ."/print/".$node->nid;



              print $url;



          }?>" target="_blank"><?php print t('Reading mode'); ?></a>



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



          }?>"><?php print t('Download') ?></a>



      </div>

        <div class="print">

          <a href="javascript:;" onclick="window.print()">

              <?php print t('Print'); ?>

          </a>

        </div>

    </div>



  </div>







<!--  <?php print render($content['links']); ?>  -->











<?php print render($content['field_helpful']); ?>



<?php print render($content['comments']); ?>







</article>



<div class="mobile-tabs">

        <?php

          $my_block = module_invoke('views', 'block_view', 'tabs_mobile-block');?>

          <?php print render($my_block['content']); 

        ?>

</div>



 <?php print render($content['book_navigation']);?>















 