#!/bin/env python3
num = eval(input("What is the height? "))

spaces = 0
pat = num
print()

while num != 0:
    for i in range(pat):
        print('*', end="")

    for i in range(spaces):
        print(' ', end="")

    spaces += 1
    pat -= 1

    num -= 1

    print()
