#ifndef _SHELL_H
#define _SHELL_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdbool.h>
#include <string.h>

extern char *line_ptr;
extern char **environ;
char *get_line(void);
char **parser(char *str, const char *delim);
bool built_in(char *cmd);
char *_getenv(const char *name);
int _strlen(char *s);
char *_strdup(char *s);
int _strcmp(char *s1, char *s2);
void execute(char *cmd, char *argv[], char *envp[]);
void execute_b(char **command);
void execute_e(char *cmd, char *argv[], char *envp[]);
char *checker(char *token);


void prompt(void);
#endif
