#include<stdio.h>
#include<string.h>

int main()
{
    char aa[1000];
    int i=0;
    for(i=0;i<300;i++)
    {
        aa[i]=-1-i;
        printf("aa %d->%c:%2x\t",i,aa[i],aa[i]);
        if(i+1%10==0)
            printf("\r\n");
    }
    printf("size of aa is %d\n",strlen(aa));
}
