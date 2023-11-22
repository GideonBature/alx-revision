#!/usr/bin/python3
"""square class
"""

class Square():
    """square class
    """
    def __init__(self, size=0):
        """constructor
        
        size(private): size of square
        """
        if type(size) is not int:
            raise TypeError("size must be an integer")

        if size < 0:
            raise ValueError("size must be >= 0")

        self.__size = size

    @property
    def 

    def area(self):
        return self.__size * self.__size
