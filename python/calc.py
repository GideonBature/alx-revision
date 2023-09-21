#!/usr/bin/python3

def add(x, y):
    return x + y

def sub(x, y):
    return x - y

def mul(x, y):
    return x * y

def div(x, y):
    return x / y

def mod(x, y):
    return x % y


if __name__ == "__main__":
    import sys
    x = sys.argv[1]
    x = int(x)
    y = sys.argv[2]
    y = int(y)

    print("Addition:", add(x, y))
    print("Subtraction:", sub(x, y))
    print("Multiplication:", mul(x, y))
    print(f"Division: {div(x, y):.2f}")
    print("Modulus:", mod(x, y))
