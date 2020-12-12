#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n Enter 2 number");
	scanf("%d%d",&a,&b);
	if(a>b)
		c=a-b;
	else
		c=a+b;
	printf("\n The answear is:%d",c);
return 0;
}
