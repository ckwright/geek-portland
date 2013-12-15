##geek portland

Geek Portland 2.0
Based on the OpenSourcery's Turnip build
Using OS_Event & OS_blog

### Deploying
To deploy to the development server:
1) Run `bin/deploy_to_production`
2) (Until we decide to keep the database) SSH into spalding
3) Run the install through drush: ~/drush/drush site-install -y --uri=default my_profile
