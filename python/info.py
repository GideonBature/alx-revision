#!/usr/bin/python3

def main():
    import sys
    name_arg = sys.argv[1]
    age_arg = int(sys.argv[2])

    print("Name:", name(name_arg))
    print("Age:", age(age_arg))

def name(input_str):
    return input_str

def age(input_num):
    return input_num


if __name__ == "__main__":
    main()
