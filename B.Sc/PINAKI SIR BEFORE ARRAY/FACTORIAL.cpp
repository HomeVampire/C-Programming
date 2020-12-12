#include<stdio.h>
int main()
	{
		int a,b=1,c=1;
		printf("\n Enter a no.");
		scanf("%d",&a);
		while(b<=a)
			{
				c=c*b;
				b++;
			}
		printf("\n Result=%d",c);
return 0;
	}
