#!/usr/bin/python3
"""object to json"""
import json


def to_json(data={}):
	json_string = json.dumps(data)
	print(json_string)

string = to_json({'name':'Gideon Bature', 'age': 36,})
