#!/usr/bin/python3

with open('text2.txt', 'w', encoding='utf-8') as f:
	f.write("My name is Gideon Bature\n")
	f.write("I am a seasoned Engineer\n")

with open('text2.txt', 'r', encoding='utf-8') as f:
	for line in f:
		print(line, end="")
