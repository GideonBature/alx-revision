#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *str = strdup("Software Engineering is the best");
    const char *delim = " ";
    char *token;

    token = strtok(str, delim);
    while (token)
    {
        printf("%s\n", token);
        token = strtok('\0', delim);
    }
    return (0);
}
