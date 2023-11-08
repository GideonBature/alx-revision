#!/usr/bin/env python3
"""The base model class
"""
import uuid
from datetime import datetime


class BaseModel():
    """Defines all common attributes/methods for other classes
    """
    def __init__(self):
        """instance of objects
        """
        self.id = str(uuid.uuid4())
        self.created_at = datetime.now()
        self.updated_at = datetime.now()

    def __str__(self):
        """prints [<class name>] (<self.id>) <self.__dict__>
        """
        class_name = self.__class__.__name__
        return f"[{class_name}] ({self.id}) {self.__dict__}"

    def save(self):
        """updates updated_at with current datetime
        """
        self.updated_at = datetime.now()

    def to_dict(self):
        """returns dictionary containing all
        keys/values of __dict__ of the instance
        """
        dict_copy = self.__dict__.copy()
        dict_copy["__class__"] = self.__class__.__name__
        dict_copy["created_at"] = self.created_at.isoformat()
        dict_copy["updated_at"] = self.updated_at.isoformat()
        return dict_copy
