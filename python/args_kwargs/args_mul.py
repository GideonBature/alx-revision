#!/usr/bin/python3
"""*args"""


def mul(*args):
	result = 1
	if args is None:
		print("Please enter an argument")
	else:
		for arg in args:
			result *= arg
	return result

res = mul()
print(res)
