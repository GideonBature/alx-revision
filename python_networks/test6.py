#!/usr/bin/env python3
"""re-encoding and saving
"""
from urllib.request import urlopen
url = "https://www.google.com"
with urlopen(url) as response:
    body = response.read()

char_set = response.headers.get_content_charset()
print(char_set)
content = body.decode(char_set)
file = "google.html"
with open(file, encoding="utf-8", mode="w") as file:
    file.write(content)
