//CHECK A NUMBER DEVIDED BY 3 OR 7 OR NOT

#include<stdio.h>
int main()
{
	int a,r1,r2;
	printf("\n enter the value:");
	scanf("%d",&a);
	r1=(a%3);
	r2=(a%7);
	if((r1==0)&&(r2==0))
	printf("\n divisiable");
	else 
	printf("\n non divisiable");
	
return 0;
}
