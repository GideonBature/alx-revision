#!/usr/bin/python3
def fahrenheit(T):
    return ((float(9)/5)*T + 32)
def celsius(T):
    return (float(5)/9)*(T-32)
temperatures = (36.5, 37, 37.5, 38, 39)
F = (map(fahrenheit, temperatures))
C = (map(celsius, F))

print(list(F))
print(list(C))
