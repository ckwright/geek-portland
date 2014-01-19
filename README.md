##geek portland

Geek Portland 2.0
Based on the OpenSourcery's Turnip build
Using OS_Event & OS_blog

### Deploying
To deploy to the development server:
1) Run `bin/deploy_to_production`
2) (Until we decide to keep the database) SSH into spalding
3) Run the install through drush: ~/drush/drush site-install -y --uri=default my_profile

### How content is organized
Rendered entities should always conform to a given pattern:

 * Full page: Display mode: 'Default'
 * Search results or listings: Display mode: 'Teaser'
 * Grouped search results (where each item is grouped by a header): Display mode: 'blurb'
 * Rendered entity links: Display mode: 'Location link' (only applies to content with an address field).
