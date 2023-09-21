#include "shell.h"
/**
 * parser - parse a string into tokens using delimiters
 * @str: string to be parsed.
 * @delim: delimiter.
 * Return: array of pointers to tokens.
 */
char **parser(char *str, const char *delim)
{
	char **array = NULL;
	char *token = NULL;
	int count = 0, i = 0, j;
	char *s = NULL;

	if (str == NULL || delim == NULL)
	{
		return (NULL);
	}
	s = strdup(str);
	token = strtok(s, delim);
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, delim);
	}
	array = malloc(sizeof(char *) * (count + 1));
	if (array == NULL)
	{
		free(s);
		return (NULL);
	}
	token = strtok(str, delim);
	while (token != NULL)
	{
		array[i] = token;
		if (array[i] == NULL)
		{
			for (j = 0 ; j < i; j++)
				free(array[j]);
			free(array);
			free(s);
			return (NULL);
		}
		token = strtok(NULL, delim);
		i++;
	}
	array[i] = NULL;
	free(s);
	return (array);
}
