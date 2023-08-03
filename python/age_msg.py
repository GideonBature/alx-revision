#!/bin/env python3
age = eval(input("Enter age: "))

if (age >= 1 and age <= 18):
    print("Important Birthday")
elif (age == 21 or age == 50):
    print("Important Birthday")
elif not(age < 65):
    print("important Birthday")
else:
    print("Sorry, Not Important")
