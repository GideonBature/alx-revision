#!/bin/env python3
def create_tree(height):
    total_width = height * 2 - 1

    for i in range(1, height + 1):
        spaces = total_width - (2 * i - 1)
        stars = 2 * i - 1

        row = " " * (spaces // 2) + "*" * stars + " " * (spaces // 2)
        print(row)

# Example usage with height=5
create_tree(5)

