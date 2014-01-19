/*
 * This script adds magnific popups to media_gallery images.
 */
(function ($) {
  Drupal.behaviors.adaptiveThemeHelperMagnific = {
    attach: function (context, settings) {
      $('.field-name-field-image', context).magnificPopup({
        delegate: 'a',
        type: 'image',
        tLoading: 'Loading image #%curr%...',
        mainClass: 'mfp-img-mobile',
        gallery: {
          enabled: true,
          navigateByImgClick: true,
          preload: [0,1] // Will preload 0 - before current, and 1 after the current image
        },
        image: {
          tError: '<a href="%url%">The image #%curr%</a> could not be loaded.',
          titleSrc: function(item) {
            return item.el.attr('title') + '<small>by Marsel Van Oosten</small>';
          }
        }
      });
    }
  };

})(jQuery);
