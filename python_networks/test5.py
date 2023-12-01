#!/usr/bin/env python3
"""write binary to file
"""
from urllib.request import urlopen
url = "https://www.example.com"
with urlopen(url) as response:
    body = response.read()

file = "example.html"
with open(file, mode="wb") as html_file:
    html_file.write(body)
