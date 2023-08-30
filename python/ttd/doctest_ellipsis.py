#!/usr/bin/python3
# doctest_ellipsis.py

class Person:
	pass


def unpredictable(value):
	"""Returns a new list containing obj.

	>>> unpredictable(Person()) #doctest: +ELLIPSIS
	<doctest_ellipsis.Person object at 0x...>
	"""
	return value
