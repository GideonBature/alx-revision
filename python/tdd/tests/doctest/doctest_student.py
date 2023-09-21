#!/usr/bin/python3

class Student:
    """
    a student sample
    >>> from doctest_student import Student
    >>> stu_1 = Student("Gideon", "Bature", 26)
    >>> stu_2 = Student("Grace", "Andrew", 24)
    >>> stu_3 = Student("Will", "Simon", 17)
    >>> stu_1.full_name()
    'Gideon Bature'
    >>> stu_2.full_name()
    'Grace Andrew'
    >>> stu_3.full_name()
    'Will Simon'
    >>> stu_1.email()
    'Gideon.Bature@gmail.com'
    >>> stu_2.email()
    'Grace.Andrew@gmail.com'
    >>> stu_3.email()
    'Will.Simon@gmail.com'
    >>> stu_1.age()
    Traceback (most recent call last):
        File "<stdin>", line 1, in <module>
    TypeError: 'int' object is not callable
    >>> stu_2.age()
    Traceback (most recent call last):
        File "<stdin>", line 1, in <module>
    TypeError: 'int' object is not callable
    >>> stu_3.age()
    Traceback (most recent call last):
        File "<stdin>", line 1, in <module>
    TypeError: 'int' object is not callable

    """

    def __init__(self, fname, lname, age):
        self.fname = fname
        self.lname = lname
        self.age = age

    def full_name(self):
        return f'{self.fname} {self.lname}'

    def email(self):
        return f'{self.fname}.{self.lname}@gmail.com'

    def age(self):
        return f'{self.age} years old'

if __name__=='__main__':
    import doctest
    doctest.testmod()
