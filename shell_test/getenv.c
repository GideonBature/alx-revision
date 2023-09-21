#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

extern char **environ;

char *_getenv(const char *name) {
  char **environ = environ;
  while (*environ != NULL) {
    if (strncmp(*environ, name, strlen(name)) == 0) {
      if (*environ + strlen(name) + 1 >= environ + sizeof(environ)) {
        return NULL;
      }
      return (*environ + strlen(name) + 1);
    }
    environ++;
  }
  return NULL;
}

int main() {
  char *value = _getenv("HOME");
  if (value != NULL) {
    printf("The value of the HOME environment variable is: %s\n", value);
  } else {
    printf("The HOME environment variable is not defined.\n");
  }
  return 0;
}

