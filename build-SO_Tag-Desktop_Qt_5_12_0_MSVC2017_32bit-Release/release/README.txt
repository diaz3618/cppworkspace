# About
This is a small program designed to print Special Order and Store Order tags for Home Depot, specifically the receiving department.


# Features

Printing:
- Tag can be printed by pressing the "Print" button or pressing enter on either name of order number text areas.
- Pressing Ctrl + # (# meaning any number from 1-9) will print x amount of tags.
		e.g. Ctrl+4 will print 4 tags.
Misc:
- Menu icon on lower left has a drop-down menu to switch between Special Orders and Store Orders; set as a separate "widget" for input validation purposes.
- When executed for the first time, you will be asked your store number and the first 3 numbers on PO used in your store.
This information will be stored in a file name "store.conf"; this file is used to validate order numbers 
before printing to avoid mistakes. This file is essential for this program to work as intended
This file looks like this (KEEP THIS FORMAT, simply change the store number and po number if needed):
	[store]
	0270

	[po]
	705
	
	** e.g. "0270" is used to validate store orders like: "H0270-12345".
		"705" is used to validate special orders that like: "70512345"
	*Deleting this file will prompt file creation dialog.
- Customer name will always print in capital letters; no matter how it's entered in the text input box.


** Windows 10 might warn the user about running an "unrecognized app". If this happens, simply click "More info", then click "Run anyway".

Ideas, questions, bugs, errors?
email: diaz.santiago.3618@gmail.com
download: https://drive.google.com/open?id=135XyZt7_L69N4_gjO-28HVxHhfj7fO1k