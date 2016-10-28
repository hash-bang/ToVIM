ToVIM
=====
Use VIM as a pipe to open files.

Example:

	# Open all files that grep returns in VIM
	grep 'foo' /usr/bin/* -l | tovim


Installation
------------

	git clone https://github.com/hash-bang/ToVIM.git
	cd ToVIM
	sudo make install


Credit
======
ToVIM is a wrapper around a very old piece of C code which converts the input into something VIM can intepret. Regretably I have lost the original source for the code. If anyone is aware of it please let me know so I can credit the author.
