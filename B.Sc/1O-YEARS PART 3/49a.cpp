#include<stdio.h>
int fact(int);
int main()
{
	int n,f;
	printf("\n Enter a number");
	scanf("%d",&n);
	f=fact(n);
	printf("\n Result=%d",f);
return 0;
}
int fact(int x)
{
	int i=1,f=1;
		while(i<=x)
			{
				f=f*i;
				i++;
			}
	return (f);
}
