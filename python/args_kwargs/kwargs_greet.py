#!/usr/bin/python3
"""**kwargs"""


def greet(**kwargs):
	if 'name' in kwargs and 'age' in kwargs:
		return f"Hello, {kwargs['name']}! You are {kwargs['age']} years old."
	else:
		return "Hello there!"

print(greet(name="Grace", age=24))
print(greet())
