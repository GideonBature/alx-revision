#!/usr/bin/env python3
"""datetime dictionary format
"""
from datetime import datetime

date_now = datetime.now()
a_dict = {'my_date': date_now}
print(type(a_dict))
print(type(a_dict['my_date']))
print(a_dict)
