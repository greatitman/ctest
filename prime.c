#include<stdio.h>
#include<unistd.h>
int isPrime(int n)
{
	int i =2;
	for(;i<n;i++)
	{
		usleep(1);
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int i=1,n=10000,k=1;
	printf("prime from 1 to 1000 is as follow:\n");
	for(;i<n;i++)
	{
		if(isPrime(i))
		{
			printf("%d\t",i);
			k++;
		}
		if(k%10==0)
			printf("\n");
	}
	return 0;
		
}
