#!/usr/bin/python3

class Person:
	def __init__(self, name):
		self.name = name

	def greet(self):
		print('Greetings', self.name)

p = Person('Gideon Bature')
p.greet()
