#!/usr/bin/python3
"""json list"""
import json

json_string = '["red", "orange", "blue", "yellow", "pink", "white"]'

py_object = json.loads(json_string)
print(py_object)
