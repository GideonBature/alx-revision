#include <sys/wait.h>
#include <sys/types.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <fcntl.h>

char *line_ptr = NULL;

void clean_up(void)
{
	free(line_ptr);
	if (isatty(fileno(stdin)))
		printf("\n");
}

void sig_int_handler(int sig)
{
	exit(0);
}

char *_getline(void)
{
	size_t nb = 0, new_nb;
	ssize_t nb_read;

	nb_read = getline(&line_ptr, &nb, stdin);

	if (nb_read == -1)
	{
		if (isatty(fileno(stdin)))
		{
			perror("./shell");
			exit(1);
		}
		else
		{
			exit(1);
		}
	}

	new_nb = strcspn(line_ptr, "\n");

	if (line_ptr[new_nb] == '\n')
		line_ptr[new_nb] = '\0';

	return (line_ptr);
}

void fork_wait(char **env)
{
	pid_t child_pid;
	int status;

	child_pid = fork();

	char *const argv[] = {line_ptr, NULL};

	if (child_pid == -1)
	{
		perror("./shell");
		exit(1);
	}
	if (child_pid == 0)
	{
		if (execve(argv[0], argv, env) == -1)
		{
			perror("./shell3");
			exit(0);
		}
		else if (!execve(argv[0], argv, NULL))
			printf("%s", line_ptr);
	}
	else
	{
		wait(&status);
	}
}

int main(int ac, char **av, char **env)
{
	atexit(clean_up);
	signal(SIGINT, sig_int_handler);

	while (true)
	{
		if (isatty(fileno(stdin)))
			printf("Bene:~$ ");

		_getline();
		fork_wait(env);

		free(line_ptr);
		line_ptr = NULL;
	}
	return (0);
}
