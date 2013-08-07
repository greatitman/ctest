#include<stdio.h>
#include<fcntl.h>

int main()
{
	int pid1,pid2;
	pid1 = fork();
	pid2= fork();
	printf("pid1=%d,pid2=%d\n",pid1,pid2);
}
