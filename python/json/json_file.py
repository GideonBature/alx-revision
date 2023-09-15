#!/usr/bin/python3
"""saves to json file"""
import json


def to_json_file(data={}):
	with open('dict.json', 'w', encoding='utf-8') as json_file:
		json.dump(data, json_file)

to_json_file({'name': 'Grace Ajogi Andrew', 'age': 24, 'hobby': 'singing'})
