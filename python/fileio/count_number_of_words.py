#!/usr/bin/python3

with open('file.txt', 'r', encoding='utf-8') as f:
	count = 0
	for c in f:
		for ch in c:
			count += 1
	print(count)
