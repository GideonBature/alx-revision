#!/usr/bin/python3

with open('list_of_numbers.txt', 'r', encoding='utf-8') as f:
	sum = 0
	for n in f:
		n = int(n)
		sum = sum + n
	print(sum)
