//PERIMETRE AND RADIOUS OF A CIRCLE

#include<stdio.h>
#define PI 3.14
int main()
{
	float r,p,a;
	printf ("\n enter the radious of the circle in cm");
	scanf ("%f",&r);
	p=(2*PI*r);
	a=(PI*r*r);
	printf ("\nthe area is%f",a);
	printf ("\nthe perimeter is%f",p);
	
return 0;	
}
