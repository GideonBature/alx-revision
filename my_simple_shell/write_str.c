#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;

	char str[100] = "My Name is Gideon Bature.\nA Seasoned Software Engineer\n";

	fp = fopen("file.txt", "w");

	if (fp == NULL)
		exit(98);

	fputs(str, fp);

	fclose(fp);

	return (0);
}
