#include <sys/wait.h>
#include <sys/types.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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
        char *full_path = NULL;
        char *command = strtok(line_ptr, " ");
        char *args[256];  // Array to store command arguments
        args[0] = command;

        char *path = getenv("PATH");
        char *dir = strtok(path, ":");

        int i = 1;
        while (dir != NULL)
        {
            char temp[1024];
            snprintf(temp, sizeof(temp), "%s/%s", dir, command);

            if (access(temp, X_OK) == 0)
            {
                full_path = strdup(temp);
                break;
            }

            dir = strtok(NULL, ":");
        }

        if (full_path != NULL)
        {
            char *arg = strtok(NULL, " ");
            while (arg != NULL && i < 255)
            {
                args[i++] = arg;
                arg = strtok(NULL, " ");
            }
            args[i] = NULL;

            if (execve(full_path, args, NULL) == -1)
            {
                perror("Error in execve:");
                exit(0);
            }
        }
        else
        {
            printf("Command not found: %s\n", command);
            exit(0);
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

