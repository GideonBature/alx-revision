#!/usr/bin/env python3
"""testing python network with urllib
"""

import urllib.request
with urllib.request.urlopen('http://python.org/') as response:
    html = response.read()

    print(html)
