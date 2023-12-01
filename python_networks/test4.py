#!/usr/bin/env python3
"""utf-8 decoding
"""
from urllib.request import urlopen
url = "https://www.example.com"
with urlopen(url) as response:
    body = response.read()

print(response.headers)
char_set = response.headers.get_content_charset()
print(char_set)
decoded_body = body.decode(char_set)
print(decoded_body[:])
