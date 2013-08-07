#include<stdio.h>
#include<unistd.h>
//#include<sys/types.h>
//#include<sys/stat.h>
//#include<errno.h>
#include<fcntl.h>
#include<stdlib.h>

#define ERR_EXIT(m) \
  do{ \
     perror(m);\
     exit(-1);\
  }while(0)

int main()
{
    int infd = open("test.txt",O_RDONLY);
    if(infd==-1)
        ERR_EXIT("OPEN ERROR");
    char buf2[1024] = {0};
    int ret = read(infd,buf2,5);
    if(ret==-1)
        ERR_EXIT("read error");
    ret = lseek(infd,0,SEEK_CUR);
    if(ret==-1)
        ERR_EXIT("LSEEK ERROR");
    printf("current offset=%d\n",ret);
    
    int outfd = open("hole.txt",O_WRONLY | O_CREAT |O_TRUNC,0664);
    if(outfd==-1)
        ERR_EXIT("CREAT OPEN ERROR");
    write(outfd,"ABCDE",5);
    ret = lseek(outfd,1024*1024*1024,SEEK_CUR);
    if(ret==-1)
        ERR_EXIT("lseek error");
    write(outfd,"hello",5);
    close(infd);
    close(outfd);
}
