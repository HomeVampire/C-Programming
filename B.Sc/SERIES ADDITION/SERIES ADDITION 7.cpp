//ADDITION OF SERIES-7

#include<stdio.h>
int main()
{
	int i,n,m;
	float s=0;
	printf("\n Enter a no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		m=(i*(i+1));
		s=s+1/(float)m;	
	}
printf("\n The result is%f",s);
return 0;
}
