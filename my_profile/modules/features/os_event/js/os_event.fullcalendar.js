/**
 * @file
 * Changes onclick behavior for fullcalendar module to open a popup.
 */

(function($) {
Drupal.fullcalendar.plugins.os_event = {
  options: function (fullcalendar, settings) {
    return {
      eventClick: function(calEvent, jsEvent, view) {
        if (settings.sameWindow) {
          window.open(calEvent.url, '_self');
        }
        else {
          window.open(calEvent.url + '?popup', '_blank', 'height=500,width=600,scrollbars=yes');
        }
        return false;
      },
      eventAfterAllRender: function ( view ) {
        $('.fc-day-content').each(function() {
          var top = $(this).offset().top;
          var left = $(this).offset().left;
          var bottom = top + $(this).height();
          var right = left + $(this).width();

          var todayEvents = $(".fc-event").filter(function(i) {
            return
              $(this).offset().top >= top
              && $(this).offset().top < bottom
              && $(this).offset().left >= left
              && $(this).offset().left < right;
          });

          todayEvents.css('background', '#000');
        });
      }
    }
  }
}
}(jQuery));