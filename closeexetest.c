#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

int main(void)
{
	int fd,pid;
	char buffer[20];
	fd = open("wo.txt",O_RDONLY);
	printf("hello close on exec fd=%d\n",fd);
	int val = fcntl(fd,F_GETFD);
//	val = val|FD_CLOEXEC;
	fcntl(fd,F_SETFD,val);
	pid = fork();

	if(pid==0)
	{
		printf("child process\n");
		char child_buf[2];
		memset(child_buf,0,sizeof(child_buf));
		ssize_t bytes = read(fd,child_buf,sizeof(child_buf)-1);
		printf("child, bytes:%d,%s\n",bytes,child_buf);
		char fd_str[5];
		memset(fd_str,0,sizeof(fd_str));
		sprintf(fd_str,"%d",fd);
		int ret = execl("./exe1","exe1",fd_str,NULL);
		if(ret<0)
			perror("execl fail:");
		printf("execl success\n");
		sleep(5);
	}
	printf("out of parent process\n");
	waitpid(pid,NULL,0);
	memset(buffer,0,sizeof(buffer));
	ssize_t bytes = read(fd,buffer,sizeof(buffer)-1);
	printf("parent byts:%d,%s\n",bytes,buffer);
		

}
