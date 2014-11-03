<?php
?>

<div id="page-wrapper"><div id="page">
	<div id="topbar"></div>
  <?php if($page['leaderboard']): ?>
    <div id="leaderboard-wrapper"><div class="container clearfix">
      <?php print render($page['leaderboard']); ?>
    </div></div>
  <?php endif; ?>
      	<audio id="flash" preload="auto">
			<source src="sites/all/themes/developingroom/shutter.mp3" type="audio/mpeg" />
			<source src="sites/all/themes/developingroom/shutter.ogg" type="audio/ogg" />
		</audio>

  <div id="header-wrapper"><div class="container clearfix">
    <header class="clearfix">
      <?php if ($linked_site_logo): ?>
        <div id="logo"><?php print $linked_site_logo; ?></div>
      <?php endif; ?>
  <?php if ($page['menu_bar'] || $primary_navigation || $secondary_navigation): ?>
    <div id="nav-wrapper">
      <?php print render($page['menu_bar']); ?>
      <?php if ($primary_navigation): print $primary_navigation; endif; ?>
      <?php if ($secondary_navigation): print $secondary_navigation; endif; ?>
    </div>
  <?php endif; ?>


      <?php print render($page['header']); ?>

    </header>
  </div></div>


  <?php if ($title || $page['secondary_content']): ?>
    <div id="secondary-content-wrapper"><div class="container clearfix">
    <?php if ($title): ?>
                <h1 id="page-title"><?php print $title; ?></h1>
              <?php endif; ?>
      <?php print render($page['secondary_content']); ?>

  <?php if ($breadcrumb): ?>
    <div id="breadcrumb-wrapper"><div class="container clearfix">
      <section id="breadcrumb" class="clearfix">
        <?php print $breadcrumb; ?>
      </section>
    </div></div>
  <?php endif; ?>

  <?php if ($messages || $page['help']): ?>
    <div id="messages-help-wrapper"><div class="container clearfix">
      <?php print $messages; ?>
      <?php print render($page['help']); ?>
    </div></div>
  <?php endif; ?>
      
      <?php if ($primary_local_tasks || $secondary_local_tasks || $action_links): ?>
            <header>
              <?php print render($title_prefix); ?>
              
              <?php print render($title_suffix); ?>

              <?php if ($primary_local_tasks || $secondary_local_tasks || $action_links): ?>
                <div id="tasks">
                  <?php if ($primary_local_tasks): ?>
                    <ul class="tabs primary"><?php print render($primary_local_tasks); ?></ul>
                  <?php endif; ?>
                  <?php if ($secondary_local_tasks): ?>
                    <ul class="tabs secondary"><?php print render($secondary_local_tasks); ?></ul>
                  <?php endif; ?>
                  <?php if ($action_links): ?>
                    <ul class="action-links"><?php print render($action_links); ?></ul>
                  <?php endif; ?>
                </div>
              <?php endif; ?>
            </header>
          <?php endif; ?>

    </div></div>
  <?php endif; ?>

  <div id="content-wrapper"><div class="container">
    <div id="columns"><div class="columns-inner clearfix">
      <div id="content-column"><div class="content-inner">

        <?php print render($page['highlighted']); ?>

        <?php $tag = $title ? 'section' : 'div'; ?>
        <<?php print $tag; ?> id="main-content">

          
          <div id="content"><?php print render($page['content']); ?></div>

          <?php print $feed_icons; ?>

        </<?php print $tag; ?>>

        <?php print render($page['content_aside']); ?>

      </div></div>

      <?php print render($page['sidebar_first']); ?>
      <?php print render($page['sidebar_second']); ?>

    </div></div>
  </div></div>

  <?php if ($page['tertiary_content']): ?>
    <div id="tertiary-content-wrapper"><div class="container clearfix">
      <?php print render($page['tertiary_content']); ?>
    </div></div>
  <?php endif; ?>

  <?php if ($page['footer']): ?>
    <div id="footer-wrapper"><div class="container clearfix">
      <footer class="clearfix">
        <?php print render($page['footer']); ?>
      </footer>
   </div></div>
  <?php endif; ?>

</div></div>
