#!/usr/bin/python3
def add(x, y):
    return x + y
def sub(x, y):
    return x - y
def mul(x, y):
    return x * y
def div(x, y):
    return x / y

def map_functions(x, y, functions):
    res = []
    for f in functions:
        res.append(f(x, y))
    return res
family_of_functions = (add, sub, mul, div)
print(map_functions(50, 10, family_of_functions))
