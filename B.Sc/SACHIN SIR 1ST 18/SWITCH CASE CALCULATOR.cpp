//SWITCH CASE CALCULATOR

#include<stdio.h>
int main()
{
	int ch,a,b,c,v=0;
A:	printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n Enter your choice");
	scanf("%d",&ch);
	switch (ch)
		{
			case 1:
				
					printf("\n Enter 2 number");
					scanf("%d%d",&a,&b);
					c=a+b;
					printf("\n The Result is%d",c);
					break;
				
			case 2:
				
					printf("\n Enter 2 number");
					scanf("%d%d",&a,&b);
					c=a-b;
					printf("\n The Result is%d",c);
					break;
				
			case 3:
				
					printf("\n Enter 2 number");
					scanf("%d%d",&a,&b);
					c=a*b;
					printf("\n The Result is%d",c);
					break;
			
			case 4:
				
					printf("\n Enter 2 number");
					scanf("%d%d",&a,&b);
					c=a/b;
					printf("\n The Result is%d",c);
					break;
			
			default:
			    	printf("\n Enter only 1/2/3/4");
					if(v!=3)
					{
						v=v+1;
						printf("\n Enter only 1/2/3/4");
						goto A;	
					}
					else
						printf("\n Try Again");
		}
return 0;		
}
