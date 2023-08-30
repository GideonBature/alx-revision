#!/usr/bin/python3

import pytest
from mul import mul

def test_mul():
    assert mul(2, 8) == 16
    assert mul(-5, 4) == -20
    assert mul(0, 8) == 0

if __name__=='__main__':
    pytest.main()
