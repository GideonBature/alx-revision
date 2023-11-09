#!/usr/bin/env python3
"""FileStorage class
"""
import json
import os
from .. import base_model

class FileStorage():
    """serializes instances to a JSON file
    and deserialized JSON file to instances
    """
    __file_path = "file.json"
    __objects = {}
    dict_class = {
            'BaseModel': 'base_model'
            }

    def all(self):
        """returns the dictionary __objects
        """
        return self.__objects

    def new(self, obj):
        """sets in __objects the obj with key
        <obj class name>.id
        """
        key = f"{obj.__class__.__name__}.{obj.id}"
        self.__objects[key] = obj


    def save(self):
        """serializes __objects to the JSON file
        (path: __file_path)
        """
        with open(self.__file_path, "w", encoding="utf-8") as f:
            obj_dict = {k: v.to_dict() for k, v in self.__objects.items()}
            json.dump(obj_dict, f)


    def reload(self):
        """deserializes the JSON file to __objects
        (only if the JSON file (__file_path) exists;
        otherwise do nothing.
        if the file doesn't exist, no exception should
        be raised)
        """
        with open(self.__file_path, "r", encoding="utf-8") as f:
            obj_dict = json.load(f)
            class_name = obj['__class__']
            module_name = self.dict_class[class_name]

