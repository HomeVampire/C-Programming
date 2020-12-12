#include<stdio.h>
int main()
{
	int x[10],i,n,s=0,c=0;
	printf("\n Enter the length of the array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			printf("\n Enter array element");
			scanf("%d",&x[i]);
		}
	printf("\n The output\n");
	for(i=0;i<n;i++)
		printf("%5d",x[i]);
	for(i=0;i<n;i++)
		{
			if(x[i]%2==0)
				c=c+1;
			else
				s=s+1;
		}
	printf("\n EVEN=%d \n ODD=%d",c,s);
	
return 0;
}
