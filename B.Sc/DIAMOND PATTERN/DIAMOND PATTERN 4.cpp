#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("\n Enter a No");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=(n-i)+1;j++)
				printf("%c",j+64);
			
			for(k=1;k<i;k++)
				printf("%c",32);
				
			if(i==1)
				{
					for(j=n-1;j>0;j--)	
					printf("%c",j+64);
				}
			else
				{
					for(j=2;j<i;j++)
					printf("%c",32);
					for(k=(n-i)+1;k>0;k--)
					printf("%c",k+64);
				}
		printf("\n");
		}
return 0;
}
