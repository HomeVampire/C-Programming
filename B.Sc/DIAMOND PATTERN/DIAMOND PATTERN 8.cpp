#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("\n Enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d",j);
		for(k=1;k<=n-i;k++)
		printf("%d",i);
	printf("\n");
	}
	for(i=n-1;i>0;i--)
	{
		for(j=1;j<=i;j++)
		printf("%d",j);
		for(k=i;k<=n-1;k++)
		printf("%d",i);
		printf("\n");	
	}
	
return 0;
}
