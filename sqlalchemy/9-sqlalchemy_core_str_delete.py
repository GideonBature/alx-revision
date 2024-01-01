#!/usr/bin/env python3
"""Querying datas from the cookies table
"""
from sqlalchemy import (MetaData, Table, Column, Integer, Numeric, String, DateTime, ForeignKey, create_engine, insert, desc, and_, or_, not_, update, delete)
from sqlalchemy.sql import select

metadata = MetaData()

cookies = Table('cookies', metadata,
                Column('cookie_id', Integer(), primary_key=True),
                Column('cookie_name', String(50), index=True),
                Column('cookie_recipe_url', String(255)),
                Column('cookie_sku', String(55)),
                Column('quantity', Integer()),
                Column('unit_cost', Numeric(12, 2))
                )

engine = create_engine("mysql+mysqldb://root:@localhost/test", pool_recycle=3600)

conn = engine.connect()

d = delete(cookies).where(cookies.c.cookie_name == 'peanut butter')

conn.commit()
result = conn.execute(d)

print(result.rowcount)

conn.close()
