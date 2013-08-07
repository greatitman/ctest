#include<stdio.h>
int main()
{
    const volatile int i = 0;
    i=9;
    printf("i = %d\n",i);
}
