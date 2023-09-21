#!/usr/bin/python3
# doctest_blankline.py

def double_space(lines):
	"""Prints a list of lines double-spaced.

	>>> double_space(['Gideon', 'Bature'])
	Gideon
	<BLANKLINE>
	Bature
	<BLANKLINE>
	"""
	for i in lines:
		print(i)
		print()
