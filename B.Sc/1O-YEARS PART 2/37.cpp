#include<stdio.h>
void main()
int* fun(int*,int,int);
int main()
{
	int a[10],i,n,temp,*ptr;
	printf("Enter the length of array: ");
	scanf("%d",&n);
	printf("Enter array element: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the number to check: ");
	scamf("%d",&temp);
	ptr=fun(a,n,temp);
	printf("The total number of greater than given number is: %d",*ptr);
	ptr++;
	printf("The total number of equal given number is: %d",*ptr);
	ptr++;
	printf("The total number of less than given number is: %d",*ptr);

}
int* fun(int *ptr,int n,int temp)
{
	int a[3]={0,0,0},i;
	for(i=0;i<n;i++,ptr++)
	{
		if(*ptr>temp)
		a[0]++;
		else if(*ptr==temp)
		a[1]++;
		else
		a[2]++;
		
	}
	return(a);
	
}

