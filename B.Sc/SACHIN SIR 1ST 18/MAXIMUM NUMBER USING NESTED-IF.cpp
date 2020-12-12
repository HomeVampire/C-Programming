//MAXIMUM NUMBER USING NESTED-IF

#include<stdio.h>
int main()
	{
		int a,b,c,max;
		printf ("\n enter 3 inputs");
		scanf ("%d%d%d",&a,&b,&c);
		if (a>=b)
			{
				if(a>=c)
				max=a;
			else
				max=c;
			}
			else
				{
					if (b>=c)
					max=b;
				else
					max=c;	
				}
	printf ("\n the maximum number is%d",max);
	
return 0;			
	}
