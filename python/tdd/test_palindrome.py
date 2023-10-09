#!/usr/bin/python3

import pytest
from palindrome import check

def test_check():
    assert check('civic') == 'civic'
    assert check('radar') == 'radar'
    assert check('madam') == 'madam'

if __name__=='__main__':
    pytest.main()
