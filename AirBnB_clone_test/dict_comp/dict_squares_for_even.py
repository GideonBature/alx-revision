#!/usr/bin/env python3
"""Nested Dictionary Comprehension
"""
n = 10
squares_for_even = {x: {x: x**2} for x in range(1, n + 1) if x % 2 == 0}
print(squares_for_even)
