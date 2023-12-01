#!/usr/bin/env python3
"""testing python network with urllib
"""

from urllib.request import urlopen
from pprint import pprint
with urlopen('http://python.org/') as response:
    pprint(dir(response))
