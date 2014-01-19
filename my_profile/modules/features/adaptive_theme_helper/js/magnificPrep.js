/*
 * This script adds magnific popups to media_gallery images.
 */
(function ($) {
  Drupal.behaviors.adaptiveThemeHelperMagnific = {
    attach: function (context, settings) {
      $('.field-name-field-image', context).magnificPopup({
        type: 'ajax',
        gallery: {
          enabled: true // set to true to enable gallery
        },
        callbacks: {
          parseAjax: function(mfpResponse) {
            mfpResponse.data = $(mfpResponse.data).find('#content');
            $('.media-gallery-detail-info', mfpResponse.data).hide();
          }
        }

      });
    }
  };

})(jQuery);