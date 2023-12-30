#!/usr/bin/env python3
"""using sqlalchemy to create tables
"""
from sqlalchemy import (MetaData, Table, Column, Integer, Numeric, String, DateTime, ForeignKey, create_engine)
from datetime import datetime


metadata = MetaData()

subjects = Table('subjects', metadata,
                 Column('subject_id', Integer(), nullable=False, primary_key=True),
                 Column('name', String(30), nullable=False, unique=True),
                 Column('class', String(10), nullable=False)
                 )

students = Table('students', metadata,
                 Column('student_id', Integer(), primary_key=True),
                 Column('student_name', String(50), nullable=False),
                 Column('student_email', String(30), nullable=False, unique=True),
                 Column('subject_id', ForeignKey('subjects.subject_id')),
                 Column('created_on', DateTime(), default=datetime.now),
                 Column('updated_on', DateTime(), default=datetime.now, onupdate=datetime.now)
                 )

teachers = Table('teachers', metadata,
                 Column('teacher_id', Integer(), primary_key=True),
                 Column('teacher_name', String(50), nullable=False),
                 Column('teacher_email', String(50), nullable=False, unique=True),
                 Column('subject_id', ForeignKey('subjects.subject_id')),
                 Column('student_id', ForeignKey('students.student_id'))
                 )

engine = create_engine("mysql+mysqldb://root:@localhost/school", pool_recycle=3600, echo=True)
metadata.create_all(engine)
