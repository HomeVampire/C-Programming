#include<stdio.h>
int fact(int);
int main()
{
	int n,r,a,b,c,result;
	printf("Enter the value of n and r: ");
	scanf("%d%d",&n,&r);
	a=fact(n);
	b=fact(r);
	c=fact(n-r);
	result=(a/(b*c));
	printf("%f",result);
}
int fact(int n)
{
	if(n==0)
	return(1);
	else if (n==1)
	return(1);
	else
	return(n*fact(n-1));
}
