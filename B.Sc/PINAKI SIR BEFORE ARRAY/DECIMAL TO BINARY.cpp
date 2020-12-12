#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
	{
		int a,b,c=0,i=0;
		printf("\n Enter a decimal no.");
		scanf("%d",&a);
		while(a!=0)
			{
				b=a%2;
				a=a/2;
				c=c+(pow(10,i)*b);
				i++;
			}
         	printf("\n Binary=%d",c);
      getch();
   	return 0;
	}
