#include <stdio.h>
#include <unistd.h>

extern char **environ;

int main(int argc, char **argv, char **env) {
    printf("Address of env: %p\n", env);
    printf("Address of environ: %p\n", environ);

    return 0;
}

