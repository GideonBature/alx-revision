#!/usr/bin/env python3
"""check for the headers object
"""
from urllib.request import urlopen
from pprint import pprint
url = "https://www.example.com"
with urlopen(url) as response:
    pass

print(response.headers)
pprint(response.headers.items())
