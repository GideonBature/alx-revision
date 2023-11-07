#!/usr/bin/env python3
"""myShell
"""
import cmd, sys


class BeneShell(cmd.Cmd):
    prompt = '(Bene) '
    def do_welcome(self, line):
        """welcomes the user
            Usage: welcome <name>
        """
        print(f"Welcome {line} to Bene Shell Interpreter")

    def do_quit(self, line):
        """quits the program
            Usage: quit
        """


if __name__=="__main__":
    BeneShell().cmdloop()
