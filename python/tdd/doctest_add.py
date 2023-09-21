#!/usr/bin/python3


def add(x, y):
	"""
	>>> add(2, 3)
	5
	>>> add('G', 'I')
	'GI'
	>>> add('G', '5')
	'G5'
	>>> add('G', 5)
	Traceback (most recent call last):
	TypeError: can only concatenate str (not "int") to str
	"""
	return x + y
