#!/usr/bin/env python3
"""my test for subtraction
"""
import unittest

def sub(a, b):
    return a - b

class TestSubtraction(unittest.TestCase):
    """testing subtraction of two numbers
    """
    def test_positive_numbers(self):
        result = sub(14, 12)
        self.assertEqual(result, 2)

    def test_negative_numbers(self):
        result = sub(-2, -3)
        self.assertEqual(result, 1)

    def test_mixed_numbers(self):
        result = sub(5, -3)
        self.assertEqual(result, 8)

if __name__=='__main__':
    unittest.main()
