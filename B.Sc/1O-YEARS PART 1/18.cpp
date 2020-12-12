#include<stdio.h>
#include<process.h>
void add(int,int,int,int,int[10][10],int[10][10]);
void subtruct(int,int,int,int,int[10][10],int[10][10]);
void multiplication(int,int,int,int,int[10][10],int[10][10]);
int main()
{
	int x[10][10],y[10][10],i,j,r1,r2,c1,c2,ch;
 printf("Enter 1st matrix row and column number: ");
 scanf("%d%d",&r1,&c1);
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c1;j++)
  {
	printf("Enter a number:");
	scanf("%d",&x[i][j]);
  }
 }
 printf("Enter 2nd matrix row and column number: ");
 scanf("%d%d",&r2,&c2);
 for(i=0;i<r2;i++)
 {
  for(j=0;j<c2;j++)
  {
	printf("Enter a number:");
	scanf("%d",&y[i][j]);
  }
 }
 while(1)
 {
	printf("1.addition\n2.substruction\n3.multiplication\n4.Exit");
    printf("\nEnter your choice:  ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: add(r1,r2,c1,c2,x,y);
					break;
		case 2: subtruct(r1,r2,c1,c2,x,y);
					break;
		case 3: multiplication(r1,r2,c1,c2,x,y);
					break;
		case 4: exit(0);
					break;
		default : printf("\nplease enter the right input\n");
	}
 }
}
void add(int r1,int r2,int c1,int c2,int x[10][10],int y[10][10])
{
	int i,j,z[10][10];
	if(r1==r2&&c1==c2)
	{
	   for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				z[i][j]=x[i][j]+y[i][j];
			}
		}	
		printf("\n1st matrix\n");
		for(i=0;i<r2;i++)
			{
			 for(j=0;j<c2;j++)
				printf("%5d",x[i][j]);
			printf("\n");
			}
		printf("\n2nd matrix\n");
		for(i=0;i<r2;i++)
			{
			 for(j=0;j<c2;j++)
				printf("%5d",y[i][j]);
			printf("\n");
			}	
		printf("\nresult matrix\n");
		for(i=0;i<r2;i++)
			{
			 for(j=0;j<c2;j++)
				printf("%5d",z[i][j]);
			printf("\n");
			}
	}
	else
	printf("\naddition is not possible , as column or Row not same \n");
}


void subtruct(int r1,int r2,int c1,int c2,int x[10][10],int y[10][10])
{
	int i,j,z[10][10];
	if(r1==r2&&c1==c2)
	{
	   for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				z[i][j]=x[i][j]-y[i][j];
			}
		}	
		printf("\n1st matrix\n");
		for(i=0;i<r2;i++)
			{
			 for(j=0;j<c2;j++)
				printf("%5d",x[i][j]);
			printf("\n");
			}
		printf("\n2nd matrix\n");
		for(i=0;i<r2;i++)
			{
			 for(j=0;j<c2;j++)
				printf("%5d",y[i][j]);
			printf("\n");
			}	
		printf("\nresult matrix\n");
		for(i=0;i<r2;i++)
			{
			 for(j=0;j<c2;j++)
				printf("%5d",z[i][j]);
			printf("\n");
			}
	}
	else
	printf("\nsubtsraction is not possible , as column or Row not same \n");
}

void multiplication(int r1,int r2,int c1,int c2,int x[10][10],int y[10][10])
{
	int i,j,k,z[10][10];
	if(c1==r2)
	{
	  for(i=0;i<r1;i++)
	  {
		for(j=0;j<c2;j++)
		{
			z[i][j]=0;
			for(k=0;k<r2;k++)
				z[i][j]=z[i][j]+x[i][k]*y[k][j];
		}
	  }
		printf("\n1st matrix\n");
		for(i=0;i<r2;i++)
			{
			 for(j=0;j<c2;j++)
				printf("%5d",x[i][j]);
			printf("\n");
			}
		printf("\n2nd matrix\n");
		for(i=0;i<r2;i++)
			{
			 for(j=0;j<c2;j++)
				printf("%5d",y[i][j]);
			printf("\n");
			}	
		printf("\nresult matrix\n");
		for(i=0;i<r1;i++)
			{
			 for(j=0;j<c2;j++)
				printf("%5d",z[i][j]);
			printf("\n");
			}
	}
	else
	printf("\nmultiplication is not possible is not possible \n ");
}


