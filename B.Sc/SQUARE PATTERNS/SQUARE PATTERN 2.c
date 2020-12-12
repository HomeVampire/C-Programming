#include<stdio.h>
int main()
{
	int i,j,n;
	printf("\n enter the value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			for(j=1;j<=n;j++)
			{
				if(j%2==0)
				printf("1");
				else
				printf("0");
			}
		}
		else
		{
			for(j=1;j<=n;j++)
			{
				if(j%2==0)
				printf("0");
				else
				printf("1");
			}
		}
		printf("\n");
	}
}

