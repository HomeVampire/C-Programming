/*frm given nos odd even*/
#include<stdio.h>
int main()
{
	int a[10],i,n=10;
	printf("\n Enter 10 numbers");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
		printf("\n%d is negative ",a[i]);
		if(a[i]%2==0)
		printf("and even number");
		else
		printf("and odd number");
		}
		else
		{
		printf("\n%d is positive ",a[i]);
		if(a[i]%2==0)
		printf("and even number");
		else
		printf("and odd number");
		}
	}
return 0;	
}
