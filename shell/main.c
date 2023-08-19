#include "shell.h"

char *line_ptr = NULL;

int main(void)
{
	while(true)
	{
		prompt();
		char *str = get_line();

		printf("%s", str);
	}

	return (0);
}

char *get_line(void)
{
	size_t len = 0;
	FILE *stream = stdin;
	ssize_t n_char = getline(&line_ptr, &len, stream);

	if (n_char == -1)
	{
		if (feof(stream))
		{
			if (isatty(fileno(stream)))
			{
				write(1, "\n", 1);
			}
			exit(0);
		}
		perror("");
		exit(1);
	}

		line_ptr[n_char + 1] = '\0';


	return (line_ptr);
}
