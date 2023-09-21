#!/bin/env python3
while True:
    try:
        num = int(input("Enter any number: "))
        break

    except ValueError:
        print("You didn't enter a number")

    except:
        print("an unknown error occured")

print(f"Thank you for entering the number: {num}")
