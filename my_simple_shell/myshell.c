#include <sys/wait.h>
#include <sys/types.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <sys/stat.h>

char *line_ptr = NULL;

void clean_up(void)
{
    free(line_ptr);
    printf("\n");
}

void sig_int_handler(int sig)
{
    exit(0);
}

char *_getline(void)
{
    size_t nb = 0, new_nb;
    ssize_t nb_read;

    nb_read = getline(&line_ptr, &nb, stdin);

    if (nb_read == -1)
    {
        free(line_ptr);
        perror("Error in getline:");
        exit(1);
    }

    new_nb = strcspn(line_ptr, "\n");

    if (line_ptr[new_nb] == '\n')
        line_ptr[new_nb] = '\0';

    return line_ptr;
}

int is_executable(const char *path)
{
    struct stat st;
    if (stat(path, &st) == 0 && S_ISREG(st.st_mode) && (st.st_mode & S_IXUSR))
    {
        return 1;
    }
    return 0;
}

void fork_wait(void)
{
    pid_t child_pid;
    child_pid = fork();
    int status;

    if (child_pid == -1)
    {
        perror("Error in fork:");
        exit(1);
    }
    if (child_pid == 0)
    {
        char *command = line_ptr;
        char path[256];

        if (is_executable(command) && realpath(command, path) != NULL)
        {
            printf("%s\n", path);
            if (execve(path, &command, NULL) == -1)
            {
                perror("Error in execve:");
                exit(1);
            }
        }
        else
        {
            printf("Command '%s' not found\n", command);
            exit(1);
        }
    }
    else
    {
        wait(&status);
    }
}

int main(void)
{
    atexit(clean_up);
    signal(SIGINT, sig_int_handler);

    while (true)
    {
        printf("Bene:~$ ");

        _getline();
        fork_wait();

        free(line_ptr);
        line_ptr = NULL;
    }
    return 0;
}

