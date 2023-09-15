#!/usr/bin/python3
"""encode list to json"""
import json


def list_to_json(data=[]):
	json_list = json.dumps(data)
	print(json_list)

list_to_json([2, 4, -6, 8, 54, -9])
