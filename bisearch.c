#include<stdio.h>

int biSearch(int a[], int len, int x)
{
	int low=0,high=len;
	int mid;
	while(low<=high)
	{
		mid = (low+high)/2;
		printf("mid is %d,array is %d\n",mid,a[mid]);
		if(a[mid]<x)
			low=mid+1;
		else if(a[mid]>x)
			high=mid-1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arry[6]={1,3,5,7,9,11};
	int ret = biSearch(arry,6,3);
	printf("search result is ret=%d\n",ret);
	return 0;
}
