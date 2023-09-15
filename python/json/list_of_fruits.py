#!/usr/bin/python3
"""decodes json file"""
import json


with open('list_of_fruits.json', 'r', encoding='utf-8') as json_file:
	py_obj = json.load(json_file)
	print(py_obj)
