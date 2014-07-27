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
        var eventsPerWeekDay = sortResults($(".fc-event"), 'offsetTop', 1);
        eventsPerWeekDay = sortResults(eventsPerWeekDay, 'offsetLeft', 1);

        $(eventsPerWeekDay).each(function(i) {
          if (i % 2 === 1) {
            $(this).addClass('fc-event-odd');
          }
        });
      }
    };
  }
};
function sortResults(arr, prop, asc) {
    return arr.sort(function(a, b) {
        if (asc) return (a[prop] > b[prop]);
        else return (b[prop] > a[prop]);
    });
}
}(jQuery));