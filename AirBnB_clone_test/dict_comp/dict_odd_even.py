#!/usr/bin/env python3
"""dictionary of numbers from 1 to 10
even numbers (value), odd numbers ("Odd")
"""
n = 10
dict_num = {x: x if x % 2 == 0 else "Odd" for x in range(1, n + 1)}
print(dict_num)
