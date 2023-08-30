#!/usr/bin/python3

import unittest
from string_operations import concatenate_strings, capitalize

class TestStringOperations(unittest.TestCase):

    def test_concatenate_strings(self):
        result = concatenate_strings("Hello, ", "world!")
        self.assertEqual(result, "Hello, world!")

    def test_capitalize(self):
        result = capitalize("hello")
        self.assertEqual(result, "Hello")

if __name__=='__main__':
    unittest.main()
