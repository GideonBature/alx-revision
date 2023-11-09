#!/usr/bin/env python3
"""creates unique FileStorage instance for
your application
"""
from .engine import file_storage

storage = FileStorage()
storage.reload()
