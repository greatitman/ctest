#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
int main(int argc, char *argv[])
{
   DIR    *dp;
   struct dirent *dirp;
   if(argc!=2)
   {
	printf("do like this test dir\n");
        exit(0);
    }
    if((dp=opendir(argv[1]))==NULL)
    {
         return -1;
    }   
    while((dirp = readdir(dp))!=NULL)
	printf("%s\n",dirp->d_name);
    closedir(dp);
    return 1;  
}
