#!/usr/bin/python3

import json

movies = {
	"title": "Jagun Jagun",
	"director": "Gideon Bature",
	"year": 2023
}

with open('fav_movies.json', 'w', encoding='utf-8') as json_data:
	json.dump(movies, json_data)

with open('fav_movies.json', 'r', encoding='utf-8') as json_data:
	loaded_data = json.load(json_data)
	print(loaded_data)
