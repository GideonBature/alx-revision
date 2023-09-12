#!/usr/bin/python3

import json

data = {
	"name": "Gideon",
	"age": 26,
	"city": "Kaduna"
}

json_string = json.dumps(data)
print(json_string)
