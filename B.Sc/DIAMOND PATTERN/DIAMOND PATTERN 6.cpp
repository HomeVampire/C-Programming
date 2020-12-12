#include<stdio.h>
int main()
{
	int i,m,f,n;
	printf("\n Enter the multiplicand");
	scanf("%d",&m);
	printf("\n Number of times the multiplicand is to be multiplied");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			f=m*i;
			printf("\n %dX%d=%d",m,i,f);
		}

return 0;
}
