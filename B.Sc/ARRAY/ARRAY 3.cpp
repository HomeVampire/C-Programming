#include<stdio.h>
int main()
{
	int x[10],i,n,p;
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
	printf("\n Enter a position");
	scanf("%d",p);
	p=p-1;
	printf("\n %d is deleted",x[p]);
	for(i=p;i<n;i++)
		{
		x[i]=x[i+1];
		}
	for(i=0;i<n-1;i++)
		printf("%5d",x[i]);
	
return 0;
}
