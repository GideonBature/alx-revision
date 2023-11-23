#!/usr/bin/python3
"""square class
"""


class Square():
    """square class
    """
    def __init__(self, size=0, position=(0, 0)):
        """constructor
        size(private): size of square
        """
        if type(size) is not int:
            raise TypeError("size must be an integer")

        if size < 0:
            raise ValueError("size must be >= 0")

        self.__size = size
        self.__position = position

    @property
    def size(self):
        return self.__size

    @size.setter
    def size(self, size):
        if type(size) is not int:
            raise TypeError("size must be an integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        else:
            self.__size = size

    @property
    def position(self):
        return self.__position

    @position.setter
    def position(self, value):
        if len(value) != 2 or type(value[0]) is not int or type(value[1]) \
                is not int:
            raise TypeError("position must be a tuple of 2 positive integers")
        elif value[0] < 0 or value[1] < 0:
            raise TypeError("position must be a tuple of 2 positive integers")
        else:
            self.__position = value

    def area(self):
        return self.__size * self.__size

    def my_print(self):
        for idx in range(self.__position[1]):
            print()
        if self.__size == 0:
            print()
        else:
            for i in range(self.size):
                spaces = self.__position[0] * ' '
                hashes = self.__size * '#'
                print(f"{spaces}{hashes}")

    def __str__(self):
        result = ''
        for idx in range(self.__position[1]):
            result += '\n'
        if self.__size == 0:
            result += '\n'
        else:
            for i in range(self.size):
                spaces = self.__position[0] * ' '
                hashes = self.__size * '#'
                result += f"{spaces}{hashes}\n"
        return result.rstrip()
