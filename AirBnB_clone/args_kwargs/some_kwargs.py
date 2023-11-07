#!/usr/bin/env python3
"""passing kwargs in function call
"""

def some_kwargs(key1, key2, key3):
    print("key1:", key1)
    print("key2:", key2)
    print("key3:", key3)

key_value = {'key1': 'Gideon Bature', 'key2': 25, 'key3': 'problem solving'}
some_kwargs(**key_value)
