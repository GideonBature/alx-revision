#!/usr/bin/python3

import unittest
from multiply import multiply

class TestMultiply(unittest.TestCase):

    def test_multiply(self):
        result = multiply(2, 12)
        self.assertEqual(result, 24)

if __name__=='__main__':
    unittest.main()
