#include<stdio.h>
#include<stdbool.h>
int main()
{
   int boolsize[100];
   bool a = false;
   printf("sizeof bool is %d\n", sizeof(&boolsize[0]));
}
