/* add prime nos*/
#include<stdio.h>
int main()
{
 int ct=0,i=1,j=1,n;
 printf("\n Enter the ammount of prime numbers");
 scanf("%d",&n);
	while(i<=n)
	{
		j=1;
		ct=0;
		while(j<=i)
		{
			if(i%j==0)
			ct++;
			j++; 
		}
		if(ct==2)
		{
			printf("%d ",i);
			i++;
		}
		i++;
	}
	return 0;
}
