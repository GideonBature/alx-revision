#!/usr/bin/env python3
"""fetch data and load to a dictionary
"""
from urllib.request import urlopen
import json
from pprint import pprint

url = "https://jsonplaceholder.typicode.com/todos/1"
with urlopen(url) as response:
    body = response.read()

todo_item = json.loads(body)
pprint(todo_item)
print(todo_item)
