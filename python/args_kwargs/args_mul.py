#!/usr/bin/python3
"""*args"""


def mul(*args):
	result = 1
	for arg in args:
		result *= arg
	return result

res = mul(4, 9, 2, -8, 3, 6)
print(res)
