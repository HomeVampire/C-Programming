//LEAP-YEAR USING SIMPLE IF-ELSE

#include<stdio.h>
int main()
{
	int n;
	printf("\n enter the year:");
	scanf("%d",&n);
	if((n%4==0)&&(n%100!=0)||(n%400==0)&&(n%100==0))
	printf("\n the year is leap year");
	else
	printf("\n the year is not a leap year");
	
return 0;
}
