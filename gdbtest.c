#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fun1(char *str)
{
	if(!str)
		str = (char*)malloc(11);
	strncpy(str,"hello,gdb",9);
	str[10] = '\0';
	return 1;
}
int main(int argc, char *argv[])
{
	int i,ret;
	char temp[11]={0};
	if(argc!=2)
		return -1;
	printf("the argv is %s\n", argv[1]);
	for(i=0;i<10;i++)
		printf("i=%d\t",i);
	printf("\r\nbegint to call fun1() \r\n");
	ret = fun1(temp);
	printf("temp=%s\r\n",temp);

	return 0;

}
