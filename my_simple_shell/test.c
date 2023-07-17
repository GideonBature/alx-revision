#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int add(int a, int b)
{
    return (a + b);
}

int main(void)
{
    int result;
    pid_t getpid_value;
    pid_t getppid_value;

    result = add(5, 14);
    getpid_value = getpid();
    getppid_value = getppid();

    printf("Result = %d\nParent Process ID (PPID) = %u\nProcess ID (PID) = %u\n", result, getppid_value, getpid_value);
    return (0);
}
