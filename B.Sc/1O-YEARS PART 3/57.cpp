#include<stdio.h>
int fact(int);
int main()
{
	int f,n,i,s=0;
	printf("\n Enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	f=fact(i);
	//s=s+i/f;
	}
	printf("\n The result is%d",f);
	return 0;
}
int fact (int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)	
	f=f*i;
	return (f);
}

