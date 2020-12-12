//SWAPPING USING OPERATOR TYPE 2

#include<stdio.h>
int main()
{
	int a,b;
	printf("\n enter the value of a,b:");
	scanf("%d%d",&a,&b);
	a=b+a;
	b=a-b;
	a=a-b;
	printf("\n a=%d and b=%d",a,b);
	
return 0;
}
