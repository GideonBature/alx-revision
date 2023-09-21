#!/usr/bin/python3

with open('file1.txt', 'w', encoding='utf-8') as f:
	f.write("ALX Software Engineering\n")
	f.write("It's time to do #HardThings\n")

with open('file1.txt', 'r', encoding='utf-8') as f:
	read = f.read()
	print(read)
