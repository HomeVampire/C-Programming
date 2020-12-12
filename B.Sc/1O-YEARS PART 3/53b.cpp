/*1+8+27+64+125+216+343+............*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,s=0;
	printf("\n Enter the length of the series");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	s=s+pow(i,3);
	printf("\n The result is=%d",s);
}
