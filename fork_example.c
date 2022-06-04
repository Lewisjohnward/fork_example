#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main (void)
{
    pid_t pid;
    pid_t my_pid;
    pid = fork();
    if (pid < 0)
        printf("Unable to fork\n");
    if (pid > 0)
    {
        my_pid = getpid();
        printf("I am the parent\n");
        printf("PID: %d\n", my_pid);
    }
    if (pid == 0)
    {
        my_pid = getpid();
        printf("I am the child\n");
        printf("PID: %d\n", my_pid);
    }
}
