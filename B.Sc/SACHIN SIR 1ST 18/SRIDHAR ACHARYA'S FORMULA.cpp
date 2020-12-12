//SRIDHAR ACHARYA'S FORMULA

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,x,m,y,p;
	float n,o;
    printf ("\n enter the value of a and b and c and x");
    scanf ("%d%d%d%d",&a,&b,&c,&x);
    y=(2*a);
if(y>0)
	{	
	    p=(b*b)-(4*a*c);
        m=sqrt(p);
		n=(float)(-b+m)/(float)y;
		o=(float)(-b-m)/(float)y;
		printf("\n the value of the equation:%f%f",n,o);
		
	}
	else
	printf("\n the equation imaginary");

return 0;
}
