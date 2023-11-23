#!/usr/bin/python3
"""Divide a matrix
"""


def matrix_divided(matrix, div):
    """divides all elements of a
    matrix
    matrix(lists): first parameter
    div(int): second parameter
    """
    new_matrix = [item[:] for item in matrix]
    for r in range(len(matrix)):
        if len(matrix[0]) != len(matrix[r]):
             raise TypeError("Each row of the matrix must have the same size")
        for e in range(len(matrix[r])):
            if not isinstance(matrix[r][e], (float, int)):
                raise TypeError("matrix must be a matrix (list of lists) of integers/floats")

    if not isinstance(div, (int, float)):
        raise TypeError("div must be a number")
    elif div == 0:
        raise ZeroDivisionError("division by zero")
    else:
        for row in range(len(matrix)):
            for elem in range(len(matrix[row])):
                new_matrix[row][elem] = round(matrix[row][elem] / div, 2)

    return new_matrix
