#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("\n Enter a No");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n-i;j++)
				printf("%c",32);
			
			for(k=1;k<=i;k++)
				{
				printf("%d",k);
				}
			for(j=i-1;j>0;j--)
				printf("%d",j);
			
			for(k=1;k<=(n-i);k++)
				{
				printf("%c",32);
				}
				printf("\n");
		}
return 0;
}
