#!/usr/bin/python3

import unittest
from palindrome import check

class Palindrome(unittest.TestCase):

    def test_check(self):
        result = check('rotor')
        self.assertEqual(result, 'rotor')

if __name__=='__main__':
    unittest.main()
