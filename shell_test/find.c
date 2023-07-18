#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char* findExecutableInPath(const char* executableName) {
    char* path = getenv("PATH");
    if (path == NULL) {
        return NULL;
    }

    char* pathCopy = strdup(path);
    char* directory = strtok(pathCopy, ":");

    while (directory != NULL) {
        char fullPath[1024];
        snprintf(fullPath, sizeof(fullPath), "%s/%s", directory, executableName);
        
        if (access(fullPath, X_OK) == 0) {
            free(pathCopy);
            return strdup(fullPath);
        }

        directory = strtok(NULL, ":");
    }

    free(pathCopy);
    return NULL;
}

int main() {
    const char* executableName = "home";
    char* executablePath = findExecutableInPath(executableName);

    if (executablePath != NULL) {
        printf("Executable found: %s\n", executablePath);
        free(executablePath);
    } else {
        printf("Executable not found\n");
    }

    return 0;
}

