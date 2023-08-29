#include "shell.h"

/**
 * _strlen - return the length of a string.
 * @s: the string to measure the length.
 * Return: the length.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (0);
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 *
 * @s: string to duplicate
 * Return: pointer to the new allocated space.
 */
char *_strdup(char *s)
{
	char *str;
	int len, j = 0;

	if (s == NULL)
	{
		return (NULL);
	}
	len = _strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	while (*s)
	{
		str[j] = s[j];
		s++;
	}
	str[j] = '\0';
	return (str);
}
/**
 * _strcmp - compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if both strings are equal.
 *         (+) num if first string is greater than second string.
 *         (-) num if first string is less than second string.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int f = 0;

	for (i = 0; (s1[i] || s2[i]); i++)
	{
		f = s1[i] - s2[i];
		if (f != 0)
			break;
	}
	return (f);
}
