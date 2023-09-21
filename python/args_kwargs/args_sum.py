#!/usr/bin/python3
"""*args"""


def add(*args):
	result = 0
	for arg in args:
		result += arg
	return result


ans = add(2, 8, 4, 9, 12)
print(ans)
ans = add(-4, 6, 9, -7, 2, 10)
print(ans)
