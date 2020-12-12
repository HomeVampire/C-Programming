#include<stdio.h>
int fact(int);
int main()
{
	int i,f;
	float sum=0.0;
	for(i=1;i<=7;i++)
	{
		f=fact(i);
		sum=sum+(float)i/f;
	}
	printf("\n%f",sum);
}
int fact(int n)
{
	
	if(n==1)
	return(1);
	else
	return(n*fact(n-1));
	
}


