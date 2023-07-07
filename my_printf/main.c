#include <limits.h>
#include <stdio.h>
#include "main.h"

int main()
{
    char *str = "Hello Gideon Bature";
    char ch = 'G';

	int len = 0, len2 = 0;

    _printf("Printing a string: %s\n", str);
    _printf("Printing a string: %s\n", NULL);
    _printf("Printing a character: %c\n", ch);
    _printf("Printing a literal: '%%'\n");
    return 0;
}