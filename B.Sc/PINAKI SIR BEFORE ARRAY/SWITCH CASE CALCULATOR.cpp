//SWITCH CASE CALCULATOR

#include<stdio.h>
int main()
{
	int ch,a,b,c,v=0;
	printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n Enter your choice");
	scanf("%d",&ch);
	printf("\n Enter 2 number");
	scanf("%d%d",&a,&b);
	switch (ch)
		{
			case 1:
				
					
					c=a+b;
					printf("\n The Result is%d",c);
					break;
				
			case 2:
				
					
					c=a-b;
					printf("\n The Result is%d",c);
					break;
				
			case 3:
				
					
					c=a*b;
					printf("\n The Result is%d",c);
					break;
			
			case 4:
				
					
					c=a/b;
					printf("\n The Result is%d",c);
					break;
			
			default:
			    	printf("\n Enter only 1/2/3/4");
					
		}
return 0;		
}
