#!/usr/bin/python3

import json

data = {
	"name": "Gideon Bature",
	"age": 29,
	"passion": "Computers"
}

with open('data.json', 'w', encoding='utf-8') as json_file:
	json.dump(data, json_file)
