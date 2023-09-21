#!/usr/bin/python3
"""decoding json"""
import json


json_string = '{"name": "Gideon Bature", "age": 25, "hobby": "Coding"}'

py_obj = json.loads(json_string)

print(py_obj)
