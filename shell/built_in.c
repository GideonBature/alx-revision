#include "shell.h"

bool built_in(char *cmd)
{
	int i;
	const char *command[6] = {"exit", "env", "setenv", "unsetenv", "cd", "alias"};

	for (i = 0; i < 6; i++)
	{
		if (strstr(cmd, command[i]) == cmd)
		{
			return (true);
		}
	}
	return (false);
}
