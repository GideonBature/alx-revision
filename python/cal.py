#!/usr/bin/python3
import sys
print(sys.argv)

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
    y = sys.argv[3]
    y = int(y)
    op = sys.argv[2]

    if op == '+':
        print("Addition:", add(x, y))
    elif op == '-':
        print("Subtraction:", sub(x, y))
    elif op == 'x':
        print("Multiplication:", mul(x, y))
    elif op == '/':
        print(f"Division: {div(x, y):.2f}")
    elif op == '%':
        print("Modulus:", mod(x, y))
