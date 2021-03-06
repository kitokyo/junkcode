/* Program: setpriority.c */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/resource.h>

int main(int argc, char *argv[])
{
    int errno, prio;
    pid_t pid;

    if (argc != 3) {
        printf("Usage: %s [pid] [priority (-20~19)]\n", argv[0]);
        return -1;
    }
    pid = atoi(argv[1]);
    prio = atoi(argv[2]);
    errno = setpriority(PRIO_PROCESS, pid, prio);

    printf("OK. errno = %d\n", errno);

    return 0;
}

