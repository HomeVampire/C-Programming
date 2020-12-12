#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter a number :  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--)
		printf("%d",j%2);
		printf("\n");
	}
}
