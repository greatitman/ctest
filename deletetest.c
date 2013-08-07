#include<stdio.h>
#include<stdlib.h>
int main()
{
	char * str= (char *)malloc(10);
	delete []str;
	str = NULL;
	free(str);
	printf("hello delete test\n");
}
