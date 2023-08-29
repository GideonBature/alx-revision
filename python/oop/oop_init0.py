#!/usr/bin/python3

class Phone:
	def __init__(self, brand, name):

		self.brand = brand
		self.name = name

	def info(self):
		print(f'The Phone brand is {self.brand}, and name is {self.name}')

p = Phone('Xiaomi', 'Redmi Note 13')
p.info()
