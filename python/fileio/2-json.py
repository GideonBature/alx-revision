#!/usr/bin/python3

import json

with open('data.json', 'r', encoding='utf-8') as json_file:
	loaded_data = json.load(json_file)
	print(loaded_data)
