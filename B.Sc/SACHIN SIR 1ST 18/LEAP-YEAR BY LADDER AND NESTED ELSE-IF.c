//LEAP-YEAR BY LADDER AND NESTED ELSE-IF

#include<stdio.h>
int main()
{
	int n;
	printf("\n enter the year:");
	scanf("%d",&n);
	if(n%4==0)
	{
		if(n%100!=0)
		printf("\n the year is leap year");
		else if(n%400==0)
		printf("\n the year is leap year");
		else
		printf("\n the is year not leap year");
	}
	else
	printf("\n the year is not leap year");
	
return 0;
}
