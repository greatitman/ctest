#include<stdio.h>
#include<string.h>

int main(int argc, char **argv)
{
	char buffer[20];
	int fd = atoi(argv[1]);
	memset(buffer,0,sizeof(buffer));
	ssize_t bytes = read(fd,buffer,sizeof(buffer)-1);
	if(bytes<0)
	{
		perror("exe1:read fail");
		return -1;
	}
	else
		printf("exe1:read:%d,%s\n",bytes,buffer);
	return 0;
}
