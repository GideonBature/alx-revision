#!/usr/bin/python3
"""Divide a matrix
"""


def matrix_divided(matrix, div):
    """divides all elements of a
    matrix
    matrix(lists): first parameter
    div(int): second parameter
    """
    for r in range(len(matrix)):
        for e in range(len(matrix[r])i):
            if not isinstance(matrix[r][e], (float, int)):
                raise TypeError("matrix must be a matrix (list of lists) of integers/floats")

