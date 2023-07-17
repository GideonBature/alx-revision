#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t child_pid;
	int status;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child_pid == 0)
	{
		printf("Oh! Please wait for me\n");
	}
	else
	{
		wait(&status);
		printf("Oh! I am okay now\n");
	}
	return (0);
}
