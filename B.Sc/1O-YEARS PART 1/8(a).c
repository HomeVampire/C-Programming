#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,x;
	float result1,result2;
	printf("Enter the value of a,b,c of the equation ax^2+bx+c=0 \n");
	scanf("%d%d%d",&a,&b,&c);
	x=pow(b,2)-4*a*c;
	if(x<0)
	printf("The roots are not real");
	else if(x==0)
    {
    	
	 	result1=-(float)(b/(2*a));
		printf("The roots are same and that is : %f",result1);
   	}
   	else
   	{
   		result1=(float)((-b+x)/2*a);
   		result2=(float)((-b-x)/2*a);
   		printf("two roots are %f\t%f",result1,result2);
	}
}
