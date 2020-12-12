#include<stdio.h>
#include<math.h>
int main()
	{
		int n1,n2,a=0,b=0;
		printf("\n Enter 2 no.");
		scanf("%d%d",&n1,&n2);
		while(a<n1)
			{
				b=b+n2;
				a++;
			}
		printf("\n Result=%d",b);
return 0;
	}
