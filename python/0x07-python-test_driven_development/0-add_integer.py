#!/usr/bin/python3
"""integers addition
"""


def add_integer(a, b=98):
    """add integers
    a(int): parameter
    b(int): parameter
    """
    if not isinstance(a, (float, int)):
        raise TypeError("a must be an integer")
    if not isinstance(b, (float, int)):
        raise TypeError("b must be an integer")

    return (int(a) + int(b))
