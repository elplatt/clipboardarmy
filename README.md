# clipboardarmy
Drupal-based decentralized organizing

## Installation
Examples are for Ubuntu 12.04.

### Create a database and user

Choose a database username and secure password to replace `demo_user` and `demo_password` in the code below. 

$ mysql -u root -p
    mysql> CREATE DATABASE clipboardarmy_demo;
    mysql> GRANT ALL PRIVILEGES ON clipboardarmy_demo.* TO demo_user@localhost IDENTIFIED BY ‘demo_password’;


### Create a directory on the web server

    $ sudo su www-data
    $ cd /var/www
    $ mkdir demo.clipboardarmy.net
    
### Download Drupal and Clipboard Army

    $ cd demo.clipboardarmy.net
    $ wget https://ftp.drupal.org/files/projects/drupal-7.54.tar.gz
    $ tar zxvf drupal-7.54.tar.gz
    $ git clone https://github.com/elplatt/ClipboardArmy.git
    
### Create symbolic links to the web root and the site directory

    $ ln -s drupal-7.54 html
    $ cd html/sites
    $ rm -rf default
    $ ln -s ../../ClipboardArmy default
    
### Create and update a Drupal settings file

    $ cd default
    $ cp default.settings.php settings.php
    $ nano settings.php
    
Inside `settings.php`, below `$databases = array()`:

    $databases['default']['default'] = array(
        'driver' => 'mysql',
        'database' => 'databasename',
        'username' => 'username',
        'password' => 'password',
        'host' => 'localhost',
        'prefix' => '',
   );


    
    


    

