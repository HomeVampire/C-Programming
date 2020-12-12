#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("\n enter the value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i)+1;j++)
		{
			if(i==j)
				{
					printf("0");
				}
			else
				{
					s=i+j;
					printf("%d",s);
				}
	}
	printf("\n");
}
}
