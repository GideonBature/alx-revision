#!/bin/env python3
age = eval(input("Enter age: "))

if (age == 5):
    print("Go to Kindergarten")
elif (age >= 6 and age <= 17):
    print("Go to grades 1 through 12")
elif (age > 17):
    print("Go to college")
else:
    print("Too young for school")
