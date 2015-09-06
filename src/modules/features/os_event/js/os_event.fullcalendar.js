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
        var eventsPerWeekDay = {};
        var arrayKeys = [];

        $(".fc-event").each(function(j){
          var keyValue = $(this).prop('offsetTop') + ($(this).prop('offsetLeft') * 100);
          eventsPerWeekDay[keyValue] = $(this);
          arrayKeys.push(keyValue);
        });

        arrayKeys.sort();

        for(var i = 0; i < arrayKeys.length; i++) {
          if (i % 2 === 1) {
            eventsPerWeekDay[arrayKeys[i]].addClass('fc-event-odd');
          }
        }
      }
    };
  }
};
}(jQuery));
