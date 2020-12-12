//ADDITION OF SERIES-6

#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,s=0;
	printf("\n Enter a no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+pow(i,i)/i;	
	}
printf("\n The result is%d",s);
return 0;
}
