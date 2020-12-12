#include<stdio.h>
int main()
{
	int a,b,c,min;
	printf("\n Enter 3 number");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&a<c)
		min=a;
	else if(b<a&&b<c)
		min=b;
	else if(c<a&&c<b)
		min=c;
	else
		printf("\n Wrong input");
	printf("\n The minimum number is%d",min);
return 0;
}
