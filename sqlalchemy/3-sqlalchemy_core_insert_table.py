#!/usr/bin/env python3
"""insert into student table
"""
from sqlalchemy import (create_engine, Integer, String, DateTime, insert, MetaData, Table, Column, ForeignKey)
from datetime import datetime

db_url = "mysql+mysqldb://root:@localhost/school"

engine = create_engine(db_url, echo=True, pool_recycle=3600)

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

metadata.create_all(engine)

subject_list = [
        {
            'name': 'Mathematics',
            'class': 'SSS1'
        },
        {
            'name': 'English Language',
            'class': 'SSS3'
        }
    ]

student_list = [
        {
            'student_name': 'Gideon Bature',
            'student_email': 'infoaboutgideon@st.tech.com',
            'subject_id': 2
        },
        {
            'student_name': 'Gladys Simon',
            'student_email': 'infoaboutgladys@st.nursing.com',
            'subject_id': 1
        }
    ]

conn = engine.connect()

conn.execute(insert(subjects).values(subject_list))
conn.execute(insert(students).values(student_list))

conn.commit()

conn.close()
