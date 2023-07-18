#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

int main() {
    // Iterate over the environment variables until reaching NULL
    int i;
    for (i = 0; environ[i] != NULL; i++) {
        if (strstr(environ[i], "PATH") == environ[i])
	{
		printf("%s\n", environ[i]);
		break;
	}
    }

    return 0;
}

