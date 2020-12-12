#include<stdio.h>
int main()
{
	int i,k,n;
	printf("\n Enter a No");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			for(k=1;k<=(n-i)+1;k++)
				printf("%c",k+64);
			printf("\n");
		}
	for(i=1;i<n;i++)
		{
			for(k=1;k<=i+1;k++)
				printf("%c",k+64);
				printf("\n");
		}
return 0;
}
