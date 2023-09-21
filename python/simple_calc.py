#!/bin/env python3
num1, op, num2 = input("Enter num, operator, num: ").split()

num1 = int(num1)
num2 = int(num2)

if (op == '+'):
    print(f"{num1} {op} {num2} = {num1 + num2}")
elif (op == '-'):
    print(f"{num1} {op} {num2} = {num1 - num2}")
elif (op == '*'):
    print(f"{num1} {op} {num2} = {num1 * num2}")
elif (op == '/'):
    print(f"{num1} {op} {num2} = {num1 / num2:.2f}")
elif (op == '%'):
    print(f"{num1} {op} {num2} = {num1 % num2}")
else:
    print("invalid input")
