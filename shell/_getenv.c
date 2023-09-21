#include "shell.h"
/**
 * env - print the enivornment.
 *
 * Return: nothing.
 */

/**
void env(void)
{
	char **env = environ;

	while (*env != NULL)
	{
		write(STDOUT_FILENO, *env, _strlen(*env));
		write(STDOUT_FILENO, "\n", 1);
		env++;
	}
}
*/

/**
 * _getenv - get an environment variable.
 * @name: environment variable.
 * Return: This will return a value.
 */

/**
char *_getenv(const char *name)
{
	size_t len = _strlen(name);

	while (*environ)
	{
		if (strncmp(name, *environ, len) == 0 && (*environ)[len] == '=')
		{
			return ((*environ) + len + 1);
		}
		environ++;
	}
	return (NULL);
}

*/
