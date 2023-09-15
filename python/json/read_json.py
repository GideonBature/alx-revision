#!/usr/bin/python3
"""decoding json"""
import json


with open('read_json.json', 'r', encoding='utf-8') as json_string:
	py_obj = json.load(json_string)
	print(py_obj)
