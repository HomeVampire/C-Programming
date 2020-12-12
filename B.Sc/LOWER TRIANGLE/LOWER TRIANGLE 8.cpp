#include<stdio.h>
int main()
{
	int i,j,n,s=1;
	printf("\n enter the value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++,s++)
		{
		printf("%d",s);
	}
	printf("\n");
}
}
