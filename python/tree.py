#!/bin/env python3
h = eval(input("What is the height of the tree? "))

spaces = h - 1
stars = 1
trunck_spaces = h - 1

while h != 0:
    for i in range(spaces):
        print(' ', end="")

    for i in range(stars):
        print('*', end="")

    spaces -= 1
    stars += 2

    h -= 1

    print()

for i in range(trunck_spaces):
    print(' ', end="")

print('*')
