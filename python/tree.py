#!/bin/env python3
height = input("How high is the tree?: ")
height = int(height)

spaces = height - 1

stars = 1

stump_spaces = height - 1

while height != 0:

    for i in range(spaces):
        print(' ', end="")

    for i in range(stars):
        print('*', end="")

    print("")

    spaces -= 1
    stars += 2

    height -= 1

for i in range(stump_spaces):
    print(' ', end="")

print('*')
