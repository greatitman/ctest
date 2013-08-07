#include<stdio.h>
#include<string.h>
#pragma message("hello world")
int main()
{
    char a[100] = "abc//123";
    printf("len of %s is %d\n",a, strlen(a));
}
