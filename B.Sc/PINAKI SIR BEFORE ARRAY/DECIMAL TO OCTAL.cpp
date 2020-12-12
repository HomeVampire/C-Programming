#include<stdio.h>
#include<math.h>
int main()
	{
		int a,b,c=0,i=0;
		printf("\n Enter a decimal no.");
		scanf("%d",&a);
		while(a!=0)
			{
				b=a%8;
				a=a/8;
				c=c+(pow(10,i)*b);
				i++;
			}
		printf("\n Octal=%d",c);
		
return 0;
	}
