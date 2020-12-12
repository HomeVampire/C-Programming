#include<stdio.h>
int main()
{
	int i,j,r,c,a[10][10],max;
	printf("Enter the row and column number of the matrix: ");
	scanf("%d%d",&r,&c);
	printf("Enter the matrix elements: \n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	max=a[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(max<a[i][j])
			max=a[i][j];
		}
	}
	printf("The given matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%5d",a[i][j]);
		printf("\n");
	}
	printf("\nthe largest number is : %d",max);
}

