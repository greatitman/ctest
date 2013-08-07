#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void  bye(void)
{
    printf("that was all , folks\n");
    return ;
}

int main(void)
{
    long a;
    int i;
    a = sysconf(_SC_ATEXIT_MAX);
    printf("atexit_max=%ld\n",a);
    i = atexit(bye);
    printf("i=%d,FAIL=%d,suc=%d\n",i,EXIT_FAILURE,EXIT_SUCCESS);
    if(i!=0){
        fprintf(stderr,"cannot set exit function\n");
        exit(EXIT_FAILURE);
    }
    _exit(-1);
//    return;
}
