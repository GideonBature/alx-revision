#!/usr/bin/env python3
"""testing urllib
"""
from urllib.request import urlopen
with urlopen("https://google.com.ng") as response:
    body = response.read()

print(body[:15])
