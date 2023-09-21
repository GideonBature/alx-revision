#!/usr/bin/python3
"""Runs basic arithmetic"""


class Calc:

	num_of_call = 0


	def __init__(self, a=0, b=0):
		self.a = a
		self.b = b

	def add(self, a, b):
		Calc.num_of_call += 1
		return a + b;

	def sub(self, a, b):
		Calc.num_of_call += 1
		return a - b
	
	def mul(self, a, b):
		Calc.num_of_call += 1
		return a * b

	def div(self):
		Calc.num_of_call += 1
		return self.a / self.b

p = Calc(6, 2)
print(p.add(4, 9))
print(p.sub(4, 9))
print(p.mul(4, 9))
print(p.div())
print(p.add(1, 8))
print(p.num_of_call)
