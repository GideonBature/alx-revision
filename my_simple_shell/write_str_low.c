#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(void)
{
	int fd;

	char name[50] = "My Name is Gideon Bature";

	fd = open("file2.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);

	if (fd == -1)
	{
		perror("open");
		exit(1);
	}

	write(fd, name, sizeof(name) - 1);

	close(fd);

	return (0);
}
