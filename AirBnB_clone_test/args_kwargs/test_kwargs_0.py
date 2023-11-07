#!/usr/bin/env python3
"""print key value pair
"""

def print_kwargs(**kwargs):
    for key, value in kwargs.items():
        print(f"The value of {key} is {value}")

print_kwargs(name='Gideon Bature', age=25, continent='Africa')
