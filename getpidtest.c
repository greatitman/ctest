#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    printf("my pid is %d error is %s\n", getpid(),strerror(EACCES));
    perror(argv[0]);
    exit(0);
}
