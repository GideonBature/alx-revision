#!/usr/bin/python3

class Phone:

	num = 0

	def __init__(self, brand, name, model):
		self.brand = brand
		self.name = name
		self.model = model

		Phone.num += 1

		print(f"Initializing {self.name}")

	def rm(self):
		Phone.num -= 1

		print(f"Phone Removed: {self.name}")

		if Phone.num == 0:
			print(f"{self.name} is the last of Phone left.")
		else:
			print(f"{Phone.num:d} Phone(s) left.")

	def print_info(self):
		print(f"Phone Brand: {self.brand}\nPhone Name: {self.name}\nPhone Model: {self.model}\n")

	@classmethod
	def how_many(cls):
		print(f"We have {cls.num:d} Phones left")

phone1 = Phone('Xiaomi', 'Redmi', 'Note 12')
phone1.print_info()

phone2 = Phone('Xiaomi', 'Poco', 'X4')
phone2.print_info()

phone3 = Phone('Samsung', 'Note', '10')
phone3.print_info()

Phone.how_many()

phone1.rm()
phone2.rm()
phone3.rm()
