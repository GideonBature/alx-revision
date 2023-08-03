#!/bin/env python3
num1, num2 = input("Enter two numbers, seperated by space: ").split()

num1 = int(num1)
num2 = int(num2)

sum = num1 + num2
diff = num1 - num2
mul = num1 * num2
div = num1 / num2
mod = num1 % num2

print("num1:{}\nnum2:{}\nSum: {}\nDifference: {}\nProduct: {}\nDivision: {}\nModulus: {} ".format(num1, num2, sum, diff, mul, div, mod))
print(f"\nnum1:{num1}\nnum2:{num2}\nSum: {sum}\nDifference: {diff}\nProduct: {mul}\nDivision: {div}\nModulus: {mod} ")
