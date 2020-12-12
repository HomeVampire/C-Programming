#include<math.h>
#include<stdio.h>
int fact(int);
int main()
{
	int i,x,n,f;
	float sum=1;
	printf("Enter the value of x and n: ");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++)
	{
		f=fact(2*i-1);
		sum=sum+float(pow(x,2*i-1)/f*pow(-1,i));
	}
	printf("%f",sum);
}
int fact(int n)
{
	if(n==1)
	return(1);
	else
	return(n*fact(n-1));
}


