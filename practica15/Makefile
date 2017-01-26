install:base.c
	[-z "`dpkg -l | grep sqlite3`"] $$ apt-get install sqlite3
	echo '----------------------------------'
	echo 'INSTRUCTIONS'
	echo 'TYPE the next commands ' 
	echo '  .tables'  
	echo '  .exit'
	echo '  ./base'
	echo '----------------------------------'
	sqlite3 PBSI_11.db
	gcc -Wall -g base.c -o base -std=c99 -lsqlite3