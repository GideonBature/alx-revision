#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage: %s <program_name> ...\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        if (access(argv[i], X_OK) == 0)
        {
            printf("%s\n", argv[i]);
        }
    }

    return 0;
}

