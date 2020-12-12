#include<stdio.h>
int leap(int);
int main()
{
	int n,l;
	printf("\n Enter a year");
	scanf("%d",&n);
	l=leap(n);
	if(l==1)
	printf("\n the year is leap year");
	else
	printf("\n the year is not a leap year");
return 0;
}
int leap(int x)
{
	if((x%4==0)&&(x%100!=0)||(x%400==0)&&(x%100==0))
	return 1;
	else
	return 0;
}
