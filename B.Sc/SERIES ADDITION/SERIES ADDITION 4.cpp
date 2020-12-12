//ADDITION OF SERIES-4

#include<stdio.h>
int main()
{
	int i,n;
	float s=0;
	printf("\n Enter a no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+(1/(float)i);	
	}
printf("\n The result is%f",s);
return 0;
}
