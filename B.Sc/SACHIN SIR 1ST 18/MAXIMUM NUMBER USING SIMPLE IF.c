//MAXIMUM NUMBER USING SIMPLE IF

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter the value of three number:");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a>b)&&(a>c))
	printf("\n the max value%d",a);
	if((b>a)&&(b>c))
	printf("\n the max value%d",b);
	if((c>a)&&(c>b))
	printf("\n the max value%d",c);
	if((a==b)&&(b==c))
	printf("\n the value is same");
	
return 0;
}
