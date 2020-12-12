#include<stdio.h>
int main()
{
	int x[10],i,n,l=0;
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
			if(((x[i]%4==0)&&(x[i]%100!=0))||((x[i]%400==0)&&(x[i]%100==0)))
				l=l+1;
		}
	printf("\n Total number of leap year%d",l);
	
return 0;
}
