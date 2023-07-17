#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *line_ptr = NULL;
	size_t n_bytes = 0;

	printf("$ ");

	getline(&line_ptr, &n_bytes, stdin);

	printf("%s", line_ptr);

	return (0);
}
