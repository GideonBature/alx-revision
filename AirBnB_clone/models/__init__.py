#!/usr/bin/python3
"""creates unique FileStorage instance for
your application
"""
from .engine.file_storage import FileStorage

storage = FileStorage()
storage.reload()
