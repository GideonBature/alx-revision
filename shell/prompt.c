#include "shell.h"

/**
 * prompt - prints the prompt.
 *
 */
void prompt(void)
{
	int signal;

	signal = isatty(0);
	if (signal == 1)
	{
		printf("$ ");
	}
}
