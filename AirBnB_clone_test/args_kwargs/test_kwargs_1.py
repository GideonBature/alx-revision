#!/usr/bin/env python3
"""print key value pair
"""

def print_kwargs(**kwargs):
    new_dict = {}
    for key, value in kwargs.items():
        if key == 'name':
            new_dict['name'] = 'Gideon'
        if key == 'age':
            new_dict['age'] = 25
        if key == 'continent':
            new_dict['continent'] = 'Africa'
    return new_dict


obj = print_kwargs(name='Gideon Bature', age=25, continen='Africa')
print(obj)
