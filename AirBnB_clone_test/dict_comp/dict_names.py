#!/usr/bin/env python3
"""dictionary with keys as names and length
of names as values
"""

names = ["Gideon", "Funom", "Bature", "Grace", "Andrew", "Ajogi", "Will", "Simon", "Gladys", "Agnes", "Deborah"]

dict_names = {x: len(x) for x in names}
print(dict_names)
