#include<stdio.h>
#include<string.h>
int strtoi(const char * str)
{
    int i=0;
    int sum = 0;
    for(;i<strlen(str);i++)
    {
        if(*(str+i)>='0' && *(str+i)<='9')
            sum = sum*10+ *(str+i)-'0';
        else
           break;
    }
    printf("sum is %d\n",sum);
    return sum;
}
int main(int argc , char * argv[])
{
    char str[101] = {0};
    if(argc!=2)
        return ;
    int len = strlen(argv[1]);
    strncpy(str,argv[1],len>100?100:len);
    printf("str is %s, len=%d, digits is %d\n", str,len,atoi(str));
    int aa = strtoi(str);
    return;
}
