#!/usr/bin/env python3
"""*args and **kwargs
"""

def my_fct(*args, **kwargs):
    print(f"{args} - {kwargs}")

my_fct()
my_fct("Best")
my_fct("Best", 89)
my_fct(name="Best")
my_fct(name="Best", number=89)
my_fct("School", 12, name="Best", number=89)
