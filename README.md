##geek portland

Geek Portland 2.0
Based on the OpenSourcery's Turnip build
Using OS_Event & OS_blog

### Deploying
To deploy to the development server:
1. Run `bin/deploy_to_production`
2. SSH into Dreamhost.
3. Log in as user 1 and run any updates. These can't be done through drush, because the CLI php runs out of memory.

Note: The server is set to run Drush 5.10. It also has the alias `geekdev`. So while still SSHed into the server you can run `drush @geekdev uli` to use the root user.

### How content is organized
Rendered entities should always conform to a given pattern:

 * Full page: Display mode: 'Default'
 * Search results or listings: Display mode: 'Teaser'
 * Grouped search results (where each item is grouped by a header): Display mode: 'blurb'
 * Rendered entity links: Display mode: 'Location link' (only applies to content with an address field).
