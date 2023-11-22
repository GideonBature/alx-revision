#!/usr/bin/python3
"""a program that imports functions from the file
calculator_1.py, does some Maths, and prints the result.
"""
from calculator_1 import add, sub, mul, div

if __name__ == '__main__':
    a, b = 10, 5
    add = add(a, b)
    sub = sub(a, b)
    mul = mul(a, b)
    div = div(a, b)

    print("{} + {} = {}".format(a, b, add))
    print("{} - {} = {}".format(a, b, sub))
    print("{} x {} = {}".format(a, b, mul))
    print("{} / {} = {}".format(a, b, div))
