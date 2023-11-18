#!/usr/bin/python3
"""Script that lists all states from the database <hbtn_0e_0_usa>
"""
import MySQLdb
import sys

if __name__ == "__main__":
    usr, ps, name = sys.argv[1:4]
    lh = "localhost"
    pt = 3306
    db = MySQLdb.connect(host=lh, port=pt, user=usr, passwd=ps, db=name)
    cursor = db.cursor()
    cursor.execute("SELECT * FROM states")
    states = cursor.fetchall()

    for state in states:
        print(state)

    cursor.close()
    db.close()
