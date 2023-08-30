#!/usr/bin/python3
# doctest_blankline_fail.py

def double_space(lines):
	"""Prints a list of lines double-spaced.

	>>> double_space(['Gideon', 'Bature'])
	Gideon

	Bature

	"""
	for i in lines:
		print(i)
		print()
