#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	pid_t child_pid;
	int i, status;
	char *const argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	for (i = 0; i < 5; i++)
	{
		child_pid = fork();

		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			if(execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
				return (1);
			}
			execve(argv[0], argv, NULL);
		}
		else
		{
			wait(&status);
		}
		printf("PPID-1: %u\n", getppid());
		printf("PPID-2: %u\n", getpid());
		printf("PID: 	%u\n", child_pid);
	}
		return (0);
}
