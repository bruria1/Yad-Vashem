/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {


$("#edit-field-gallery-und-actions-bundle").val("gallery");
$("#edit-field-research-und-actions-bundle").val("research");
$("#edit-field-map-chart-und-actions .form-select").val("maps_charts");
$("#edit-field-documents-und-actions-bundle").val("documents");
$("#edit-field-diaries-letters-und-actions .form-select").val("diaries_letters");
$("#edit-field-video-gallery-und-actions .form-select").val("video_gallery");




  }
};


})(jQuery, Drupal, this, this.document);
