#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	pid_t parent_pid;
	pid_t child_pid;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error:");
		return (0);
	}

	parent_pid = getpid();

	printf("\nPPID: %u\n", parent_pid);

	if (child_pid == 0)
	{
		printf("\nPPID: (%u)\n", parent_pid);
	}
	else
	{
		printf("\nPPID: %u\nPID: %u\n", parent_pid, child_pid);
	}
	return (0);
}
