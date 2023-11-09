#!/usr/bin/env python3
"""multiplication table for numbers from 2 to 5
"""

nt = 5
nc = 12

dict_mul = {x: {y: x * y for y in range(1, nc + 1)} for x in range(1, nt + 1)}
print(dict_mul)
