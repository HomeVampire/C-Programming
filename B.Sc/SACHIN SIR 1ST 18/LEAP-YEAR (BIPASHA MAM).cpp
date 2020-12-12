//LEAP-YEAR (BIPASHA MAM)

#include<stdio.h>
int main()
	{
		int a;
		printf("\n enter the year");
		scanf("%d",&a);
		if((a%100==0)&&(a%400==0))
		{printf ("\n the year is leap year");
			}
		else if((a%100!=0)&&(a%4==0))
		{printf ("\n the year is leap year");
			}	
		else
		printf ("\n the year is not leap year");
			
return 0;			
    }
