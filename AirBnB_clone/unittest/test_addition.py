#!/usr/bin/env python3
"""Unittest for my code
"""
import unittest

def add(a, b):
    return a + b


class TestAddition(unittest.TestCase):
    """Test for arithmetic
    """
    def test_add_positive_numbers(self):
        result = add(5, 7)
        self.assertEqual(result, 12)

    def test_add_negative_numbers(self):
        result = add(-3, -4)
        self.assertEqual(result, -7)

    def test_add_mixed_numbers(self):
        result = add(-3, 7)
        self.assertEqual(result, 4)

if __name__=='__main__':
    unittest.main()
