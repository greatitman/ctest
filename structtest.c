#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char a;
    int b[1];
}stu;
typedef struct NODE{
    int  a:1;
    int b:7;
   char mem[1];
}NODE, * NODEPTR;

void main()
{
    printf("sizeof empty struct is %d\n",sizeof(stu));
    NODEPTR nodeptr = malloc(sizeof(NODE)+1);
    if(nodeptr)
        printf("malloc success size if %d\n", sizeof(NODE));
    nodeptr->a = 0;
    nodeptr->b = 126;
    strncpy(nodeptr->mem,"hello world",11);
    printf("the struct is %d %d %s\n",nodeptr->a,nodeptr->b,nodeptr->mem);
}
