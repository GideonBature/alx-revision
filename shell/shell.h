#ifndef _SHELL_H
#define _SHELL_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdbool.h>
extern char *line_ptr;
extern char **environ;
char *get_line(void);

void prompt(void);
#endif
