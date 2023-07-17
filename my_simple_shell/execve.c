#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *const argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:\n");
		return (1);
	}
	return (0);
}
