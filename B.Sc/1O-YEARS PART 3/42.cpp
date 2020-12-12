#include<stdio.h>
int palendrome(int);
int main()
{
	int n,pal;
	printf("\n Enter a number");
	scanf("%d",&n);
	pal=palendrome(n);
	if(pal==1)
		printf("\n The number is palendrome");
	else
		printf("\n The number is not palendrome");
		return 0;
}
int palendrome(int n)
{
	int a,rem,temp=0;
	a=n;
    while(n!=0)
    {
        rem=n%10;
        temp=temp*10+rem;
        n=n/10;
    }
    if (a==temp)
        return 1;
    else
        return 0;
}
