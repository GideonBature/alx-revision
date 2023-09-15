#!/usr/bin/python3
"""**kwargs information"""


def info(**kwargs):
	if 'name' in kwargs and 'age' in kwargs and 'city' in kwargs:
		return f"Welcome {kwargs['name']}, you are {kwargs['age']} years old and live in {kwargs['city']}."
	if 'name' in kwargs and 'age' in kwargs:
		return f"Welcome {kwargs['name']}, you are {kwargs['age']} years old."
	if 'name' in kwargs:
		return f"Welcome {kwargs['name']}."
	else:
		return "You are welcome"

print(info(name='Grace', age=24, city='Kaduna'))
print(info(name='Gideon', age=26))
print(info(name='Funom'))
print(info())
