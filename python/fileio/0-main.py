#!/usr/bin/python3

with open('file.txt', 'w', encoding='utf-8') as f:
	f.write("Hello, World!\n")
	f.write("This is a second line.\n")

with open('file.txt', 'r', encoding='utf-8') as f:
	content = f.read()
	print(content)
