#!/usr/bin/python3
# doctest_unpredictable.py

class Person:
	pass


def unpredictable(value):
	"""Returns a new list containing obj.

	>>> unpredictable(Person())
	[<doctest_unpredictable.Person object at 0x10055a2d0>]
	"""
	return value
