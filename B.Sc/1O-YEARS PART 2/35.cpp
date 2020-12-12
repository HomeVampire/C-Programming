#include<stdio.h>
int fibb(int);
int main()
{
	int f,i,n=10;
	for(i=0;i<n;i++)
	{
		f=fibb(i);
		printf("%d\t",f);
	}
}
int fibb(int n)
{
	if(n==0)
	return(0);
	else if(n==1)
	return(1);
	else
	return(fibb(n-1)+fibb(n-2));
}

