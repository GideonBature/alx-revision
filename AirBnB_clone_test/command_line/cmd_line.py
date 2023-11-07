#!/usr/bin/env python3
"""command line to test
"""
import cmd


class MyCmd(cmd.Cmd):
    prompt = '(Bene) '

    def do_exit(self, line):
        """exit command
        usage: exit
        """
        return True

    def do_EOF(self, line):
        """EOF command
        usage: ^ + D
        """
        return True

    def do_name(self, line):
        """name command
        usage: name <name> <name> ... <name>
        """
        print(f"Your name is {line}")


if __name__=='__main__':
    MyCmd().cmdloop()
