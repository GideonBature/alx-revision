#!/bin/env python3
inv, irate = input("Enter investment and interest rate: ").split()

print(f"Investment = {inv}\nInterest Rate = {irate}")

inv = float(inv)

irate = float(irate) * 0.01

for i in range(10):
    inv += inv * irate

print(f"investment = {inv:.2f}")
