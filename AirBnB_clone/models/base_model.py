#!/usr/bin/env python3
"""Defines all common attributes/methods
    for other classes
"""
import uuid
from datetime import datetime

class BaseModel():
    """Base model class
    """

    id = str(uuid.uuid4())
    created_at = datetime.now()
    updated_at = datetime.now()

    def __str__(self):
        """the string rep of the object
        """
        classname = BaseModel.__class__.__name__
        print(f"[{classname}] (self.id) self.__dict__")

    def save(self):
        """updates the public instance attribute
        """
        self.updated_at = datetime.now()

    def to_dict(self):
        """dictionary containing all keys/values of
        __dict__ of the instance
        """


