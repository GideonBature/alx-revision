#include "shell.h"

/**
 * execute - executes command line.
 * @cmd: the command.
 * @argv: argument vector.
 * @envp: the environment pointer.
 */
void execute(char *cmd, char *argv[], char *envp[])
{
	int signal;

	signal  = execve(cmd, argv, envp);
	if (signal == -1)
	{
		perror("execve error");
		exit(EXIT_FAILURE);
	}
}

/**
 * checker - check the if the command is an executable or built-in
 * @token: the parsed command
 *
 * Return: a pointer to the path.
 */
char *checker(char *token)
{
	char *path = getenv("PATH");
	char *full_path = NULL;
	char *path2, *dir;
	int i, j;

	if (token[0] == '/' || token[0] == '.')
	{
		if (access(token, X_OK) == 0)
		{
			return (token);
		}
		else
		{
			perror("");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (path == NULL)
		{
			return (NULL);
		}
		path2 = strdup(path);
		dir = strtok(path2, ":");
		while (dir)
		{
			i = strlen(dir);
			j = strlen(token);
			full_path = malloc((i + j + 2) * sizeof(char));
			if (full_path == NULL)
			{
				free(full_path);
				free(path2);
				return (NULL);
			}
			strcpy(full_path, dir);
			strcat(full_path, "/");
			strcat(full_path, token);
			if (access(full_path, X_OK) == 0)
			{
				free(path2);
				return (full_path);
			}
			free(full_path);
			full_path = NULL;
			dir = strtok(NULL, ":");
		}
		free(full_path);
		full_path = NULL;
		dir = strtok(NULL, ":");
	}
	return (NULL);
}
