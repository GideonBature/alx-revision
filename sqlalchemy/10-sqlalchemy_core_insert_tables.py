#!/usr/bin/env python3
"""connecting sqlalchemy with database
"""
from sqlalchemy import (MetaData, Table, Column, Integer, Numeric, String, DateTime, ForeignKey, create_engine, insert)
from datetime import datetime

metadata = MetaData()

users = Table('users', metadata,
              Column('user_id', Integer(), primary_key=True),
              Column('customer_number', Integer(), autoincrement=True),
              Column('username', String(15), nullable=False, unique=True),
              Column('email_address', String(255), nullable=False, unique=True),
              Column('phone', String(20), nullable=False),
              Column('password', String(25), nullable=False),
              Column('created_on', DateTime(), default=datetime.now),
              Column('updated_on', DateTime(), default=datetime.now, onupdate=datetime.now)
              )

orders = Table('orders', metadata,
               Column('order_id', Integer(), primary_key=True),
               Column('user_id', ForeignKey('users.user_id'))
               )

line_items = Table('line_items', metadata,
                   Column('line_items_id', Integer(), primary_key=True),
                   Column('order_id', ForeignKey('orders.order_id')),
                   Column('cookie_id', ForeignKey('cookies.cookie_id')),
                   Column('quantity', Integer()),
                   Column('extended_cost', Numeric(12, 2))
                   )


engine = create_engine("mysql+mysqldb://root:@localhost/test", pool_recycle=3600, echo=True)
metadata.create_all(engine)

conn = engine.connect()
"""
users_list = [
        {
            'username': 'cookiemon',
            'email_address': 'mon@cookie.com',
            'phone': '111-111-1111',
            'password': 'password'
        },
        {
            'username': 'cakeeater',
            'email_address': 'cakeeater@cake.com',
            'phone': '222-222-2222',
            'password': 'password'
        },
        {
            'username': 'pieguy',
            'email_address': 'guy@pie.com',
            'phone': '333-333-3333',
            'password': 'password'
        }
]
"""
"""
orders_list = [
        {
            'user_id': 7,
        },
        {
            'user_id': 8,
        },
        {
            'user_id': 9,
        }
]
"""

line_items_list = [
        {
            'order_id': 2,
            'cookie_id': 25,
            'quantity': 2,
            'extended_cost': 1.00
        },
        {
            'order_id': 3,
            'cookie_id': 27,
            'quantity': 12,
            'extended_cost': 3.00
        },
        {
            'order_id': 2,
            'cookie_id': 26,
            'quantity': 24,
            'extended_cost': 12.00
        },
        {
            'order_id': 4,
            'cookie_id': 28,
            'quantity': 6,
            'extended_cost': 6.00
        }
]

"""
conn.execute(insert(users).values(users_list))
conn.commit()
"""
"""
conn.execute(insert(orders).values(orders_list))
conn.commit()
"""

conn.execute(insert(line_items).values(line_items_list))
conn.commit()

conn.close()
