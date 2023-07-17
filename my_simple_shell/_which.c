#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	unsigned int i = 1;

	if (ac < 2)
		return (1);

	while (av[i])
	{
		if (access(av[i], X_OK) == 0)
			printf("%s\n", av[i]);
		else
			continue;

		i++;
	}
	return (0);
}
