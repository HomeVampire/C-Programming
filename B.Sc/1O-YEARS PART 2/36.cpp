#include<stdio.h>
int main()
{
	int a[10],n,t=0,c=0,temp,i;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=0;n!=0;i++)
	{
		a[i]=n%10;
		n=n/10;
		t++;
	}
	printf("Enter a digit: ");
	scanf("%d",&temp);
	for(i=0;i<t;i++)
	{
		if(a[i]==temp)
		c++;
	}
	if(c==0)
	printf("The digit is not exist in the number.\n");
	else
	printf("The digit is presents for %d time : ",c);
}

