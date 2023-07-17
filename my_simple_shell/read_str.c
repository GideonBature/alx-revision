#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;

	char read_file[50];

	fp = fopen("file.txt", "r");

	if (fp == NULL)
		return (1);

	fgets(read_file, 49, fp);

	printf("%s\n", read_file);

	fclose(fp);
}
