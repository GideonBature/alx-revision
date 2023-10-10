#!/usr/bin/python3
"""Test using the cmd.Cmd
"""
import cmd

class CLI(cmd.Cmd):
    prompt = "0x83N3> "

    def do_welcome(self, args):
        print(f"Welcome {args} to the world of Tech.")

if __name__ == '__main__':
    CLI().cmdloop()
