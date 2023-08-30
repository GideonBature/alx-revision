#!/usr/bin/python3

# test_math_operations.py

import pytest
from math_operations import add, subtract

def test_add():
    assert add(3, 5) == 8
    assert add(-2, 7) == 5

def test_subtract():
    assert subtract(10, 4) == 6
    assert subtract(3, 8) == -5

if __name__ == '__main__':
    pytest.main()
