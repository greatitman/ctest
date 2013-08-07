#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

   char a[] = "hello world";
   char *da = malloc(10);
   da = "bye";
   strncpy(da,"hello",9);
   strncpy(a,"skyworth", sizeof(a));
   printf("the string is %s, da is %s, size %d\n",a,da,sizeof(da));
}
