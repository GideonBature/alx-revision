#!/usr/bin/python3

import json

with open("list.txt", 'w', encoding='utf-8') as f:
	f.write("The 5 Love Languages\n")
	f.write("The son of the Soil\nThe Art of War\n")

with open("list.txt", 'r', encoding='utf-8') as f:
	file_read = f.read()
	print(file_read)
