#!/usr/bin/env python3
"""args to multiply
"""


def multiply(*args):
    mul = 1
    for arg in args:
        mul *= arg
    print(f"{mul}")

multiply(4, 3, 8)
multiply(4, 3)
multiply(3)
