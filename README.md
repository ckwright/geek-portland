##geek portland

Geek Portland 2.0
Based on the OpenSourcery's Turnip build
Using OS_Event & OS_blog

### Deploying to test.
1. While sshed into the server, pull down the latest production database to the test server `drush sql-sync @geeklive @geektest`
2. Run `bin/deploy_to_test`
3. SSH into Dreamhost.
4. Run `drush updb`

### Deploying
To deploy to the development server:

1. While sshed into the server, pull down the latest production database: 
```
ssh geekportland
drush @geeklive sql-dump --result-file=production_current.sql --gzip
exit
scp geekportland:~/devgp/production_current.sql.gz db/production_current.sql.gz
ssh geekportland 'rm ~/devgp/production_current.sql.gz'
bin/install
```

1. Run `bin/deploy_to_production`
2. SSH into Dreamhost.
3. Run `drush updb`

Note: The server has the aliases `geeklive` and `geektest`. So while still SSHed into the server you can run `drush @geeklive uli` to use the root user.

### How content is organized
Rendered entities should always conform to a given pattern:

 * Full page: Display mode: 'Default'
 * Search results or listings: Display mode: 'Teaser'
 * Grouped search results (where each item is grouped by a header): Display mode: 'blurb'
 * Rendered entity links: Display mode: 'Location link' (only applies to content with an address field).

Here is the list of what it means to sticky, based on content types, and what it means to promote to front page, for reference:

#### Geek Page:
- Sticky: Will randomly show up on http://geekportland.com/geeks under "Featured GeekPages"
- Front page: Will randomly show up at http://geekportland.com/ under "Featured Geekpage"

#### Blog:
- Sticky: Will put the blog post at the top of the list on http://geekportland.com/blog
- Front page: Will randomly show up at http://geekportland.com/ under "Featured GeekNews"

All other content types sticky has no current implementation.
