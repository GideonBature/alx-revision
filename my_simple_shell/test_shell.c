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

ssize_t _getline(void)
{
    size_t nb = 0, new_nb;
    ssize_t nb_read;

    nb_read = getline(&line_ptr, &nb, stdin);

    if (nb_read == -1)
    {
        perror("Error:");
        return (1);
    }

    new_nb = strcspn(line_ptr, "\n");

    if (line_ptr[new_nb] == '\n')
        line_ptr[new_nb] = '\0';

    printf("%s\n", line_ptr);

    return (nb_read);
}

pid_t fork_wait(void)
{
    pid_t child_pid;
    int status;

    child_pid = fork();

    if (child_pid == -1)
    {
        perror("Error in fork:");
        exit(1);
    }
    if (child_pid == 0)
    {
        char *command = strtok(line_ptr, " "); // Parse the command name
        char *const argv[] = {command, NULL};

        if (execve(argv[0], argv, NULL) == -1)
        {
            perror("Error in execve:");
            exit(1);
        }
    }
    else
    {
        wait(&status);
    }
    return (child_pid);
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
    }
    return (0);
}
