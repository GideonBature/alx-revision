#!/usr/bin/env python3
"""passing variable number of arguments
"""

def some_args(arg1, arg2, arg3):
    print(f"{arg1}")
    print(f"{arg2}")
    print(f"{arg3}")

my_list = [1, 2, 3]
some_args(*my_list)
