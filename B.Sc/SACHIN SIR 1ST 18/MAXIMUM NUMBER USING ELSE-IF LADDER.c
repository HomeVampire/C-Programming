//MAXIMUM NUMBER USING ELSE-IF LADDER

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter the value of three number:");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a>b)&&(a>c))
	printf("\n the max value%d",a);
	else if((b>a)&&(b>c))
	printf("\n the max value%d",b);
	else if((c>a)&&(c>b))
	printf("\n the max value%d",c);
	else if((a==b)&&(b==c))
	printf("\n the value is same");
	else
	printf("\n wrong input");
	
return 0;
}
