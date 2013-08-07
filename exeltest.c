#include<stdio.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	if(argc!=2)
	{
		printf("use age execltest url\n");
		return -1;
	}
	printf("play url is %s\n",argv[1]);
	int ret = execl("/usr/local/bin/ffplay","ffplay",argv[1],NULL);
	printf("done ret=%d\n", ret);
	return 0;
}
