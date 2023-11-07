#!/usr/bin/env python3
"""The UUID module
"""
import uuid

uuid_n = uuid.uuid4()
print(type(uuid_n))
print(uuid_n)

hex_str = str(uuid_n)
print(type(hex_str))
print(hex_str)

uuid_ = uuid.UUID(hex_str)
print(type(uuid_))
print(uuid_)

