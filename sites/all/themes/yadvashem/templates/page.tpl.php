<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>
<!-- Go to www.addthis.com/dashboard to customize your tools -->
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-5146dc9e16a60b6f" async="async"></script>

<div id="top-bar">
  <div class="wrapper wrapper-top">
    <div class="left">
    font + - contrast <img src="/sites/all/themes/yadvashem/images/contrast.png">
    </div>
    <div class="right">
      <div class="welcome">
        <?php if (user_is_logged_in() == TRUE) {
          global $user;
          print t("Welcome, ") . $user->name;
          ?>
          <div class="logout"><a href='/user/logout'><?php print t("Sign out") ?></a></div>
        <?php }?>
        <?php if (user_is_logged_in() == FALSE) {
          ?>
          <div class="login"><a href='/user'><?php print t("Log in") ?></a></div>
        <?php }?>
      </div>
    </div>
  </div>
</div>
<div class="top">
  <div class="top-left">
    <div class="social-icons">
      <div class="facebook">
        <a href="https://www.facebook.com/yadvashem?fref=ts" target="_blank" title="Facebook"><img src="/sites/all/themes/yadvashem/images/facebook.png"></a>
      </div>
      <div class="twitter">
        <a href="https://twitter.com/yadvashem" target="_blank" title="Twitter"><img src="/sites/all/themes/yadvashem/images/twitter.png"></a>
      </div>
      <div class="instagram">
        <a href="https://instagram.com/yadvashem/" target="_blank" title="Instagram"><img src="/sites/all/themes/yadvashem/images/instagram.png"></a>
      </div>
      <div class="youtube">
        <a href="https://www.youtube.com/user/YadVashem" target="_blank" title="Youtube"><img src="/sites/all/themes/yadvashem/images/youtube.png"></a>
      </div>
      <div class="pinterest">
        <a href="https://www.pinterest.com/yadvashem/" target="_blank" title="Pinterest"><img src="/sites/all/themes/yadvashem/images/pinterest.png"></a>
      </div>
      <div class="mail">
        <a href="mailto:information.hebrew@yadvashem.org.il" target="_blank" title="Mail Us"><img src="/sites/all/themes/yadvashem/images/mail.png"></a>
      </div>
      <?php 
        if ( !empty($node) ) {
          global $language;
          global $base_url;
          $current_lang = $language->language;
          $default_language = language_default();
          $url = $base_url.$current_lang."/print/".$node->nid;
      ?>
      <div class="print">
        <a href="<?php print $url;?>" target="_blank"><img src="/sites/all/themes/yadvashem/images/print.png"></a>
      </div>
      <?php } ?>
    </div>
  </div>
  <?php print render($page['top']); ?>
</div>


  <header class="header wrapper" id="header" role="banner">


    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
    <?php endif; ?>

    <?php if ($site_name || $site_slogan): ?>
      <div class="header__name-and-slogan" id="name-and-slogan">
        <?php if ($site_name): ?>
          <h1 class="header__site-name" id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
        <?php endif; ?>
      </div>
    <?php endif; ?>

    <?php if ($secondary_menu): ?>
      <nav class="header__secondary-menu" id="secondary-menu" role="navigation">
        <?php print theme('links__system_secondary_menu', array(
          'links' => $secondary_menu,
          'attributes' => array(
            'class' => array('links', 'inline', 'clearfix'),
          ),
          'heading' => array(
            'text' => $secondary_menu_heading,
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>
      </nav>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </header>

    <div id="navigation">
    <div class="wrapper">
      <?php if ($main_menu): ?>
        <nav id="main-menu" class="wrapper" role="navigation" tabindex="-1">
          <?php
          // This code snippet is hard to modify. We recommend turning off the
          // "Main menu" on your sub-theme's settings form, deleting this PHP
          // code block, and, instead, using the "Menu block" module.
          // @see https://drupal.org/project/menu_block
          print theme('links__system_main_menu', array(
            'links' => $main_menu,
            'attributes' => array(
              'class' => array('links', 'inline', 'clearfix'),
            ),
            'heading' => array(
              'text' => t('Main menu'),
              'level' => 'h2',
              'class' => array('element-invisible'),
            ),
          )); ?>
        </nav>
      <?php endif; ?>

      <?php print render($page['navigation']); ?>

    </div>
    </div>
      <?php print $breadcrumb; ?>

<div id="page">

  <div id="main">
      <?php print render($title_prefix); ?>
      <h1 class="page__title title" id="page-title">






<?php
     
      if(isset($node->field_title['und'][0]['value'])) {  
              print $node->field_title['und'][0]['value'];
       }
       else{
        print $title;
       }
      
?>

   </h1>
      <?php print render($title_suffix); ?>
      
    <div id="content" class="column" role="main">
      <?php print render($page['highlighted']); ?>
      <a id="main-content"></a>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>



    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside>
    <?php endif; ?>

  </div>


</div>
<div id="footer-wrapper">
  <?php print render($page['footer']); ?>
</div>
<div id="bottom-wrapper">
  <?php print render($page['bottom']); ?>
</div>