/**
 * @file
 * Changes onclick behavior for fullcalendar module to open a popup.
 */

(function($) {
  Drupal.behaviors.fullcalendar = {
    attach: function (context, settings) {
      $('#calendar').fullCalendar({
        header: {
          left: 'prev,next today',
          center: 'title',
          right: 'month,basicWeek,basicDay'
        },
        events: {
          url: '/events.json' + window.location.search,
          cache: true,
          error: function() {
            $('#script-warning').show();
          }
        },
        loading: function(bool) {
          $('#loading').toggle(bool);
        },
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
        },
        timeFormat: 'h:mmt'
      });
    }
  };
}(jQuery));
