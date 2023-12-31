#!/usr/bin/env python3
"""connecting sqlalchemy with database
"""
from sqlalchemy import (MetaData, Table, Column, Integer, Numeric, String, DateTime, ForeignKey, create_engine, insert)
from datetime import datetime

metadata = MetaData()

cookies = Table('cookies', metadata,
                Column('cookie_id', Integer(), primary_key=True),
                Column('cookie_name', String(50), index=True),
                Column('cookie_recipe_url', String(255)),
                Column('cookie_sku', String(55)),
                Column('quantity', Integer()),
                Column('unit_cost', Numeric(12, 2))
                )

engine = create_engine("mysql+mysqldb://root:@localhost/test", pool_recycle=3600, echo=True)
metadata.create_all(engine)

conn = engine.connect()

inventory_list = [
        {
            'cookie_name': 'peanut butter',
            'cookie_recipe_url': 'http://some.aweso.me/cookie/peanut.html',
            'cookie_sku': 'PB01',
            'quantity': 24,
            'unit_cost': 0.25
        },
        {
            'cookie_name': 'oatmeal raisin',
            'cookie_recipe_url': 'http://some.okay.me/cookie/raisin.html',
            'cookie_sku': 'EWW01',
            'quantity': 100,
            'unit_cost': 1.00
        }
]

conn.execute(insert(cookies).values(inventory_list))

conn.commit()
conn.close()
