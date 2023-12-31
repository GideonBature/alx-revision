#!/usr/bin/env python3
"""insert into student table
"""
from sqlalchemy import (create_engine, Integer, String, DateTime, insert, MetaData, Table, Column, ForeignKey)
from sqlalchemy.sql import select
from datetime import datetime

db_url = "mysql+mysqldb://root:@localhost/school"

engine = create_engine(db_url, pool_recycle=3600)

metadata = MetaData()

subjects = Table ('subjects', metadata,
                  Column('name', String(30), nullable=False, unique=True),
                  Column('class', String(10), nullable=False)
            )

students = Table ('students', metadata,
                 Column('student_name', String(50), nullable=False),
                 Column('student_email', String(30), nullable=False),
                 Column('subject_id', ForeignKey('subjects.subject_id')),
                 Column('created_on', DateTime(), default=datetime.now),
                 Column('updated_on', DateTime(), default=datetime.now, onupdate=datetime.now)
            )

conn = engine.connect()

sub = subjects.select().where(subjects.c.name == 'Mathematics')
sub_rp = conn.execute(sub)

stu = students.select().where(students.c.student_name.like('%on%'))
stu_rp = conn.execute(stu)

for record in sub_rp:
    print(record.name)

print()

for record in stu_rp:
    print(f'{record.student_name}: {record.student_email}')

conn.close()
