#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("\n enter the value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		s=i*j;
		printf("%d",s);
	}
	printf("\n");
}
}
