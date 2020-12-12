#include<stdio.h>
struct area
{
	float area3,area2;
	int length1,vartical,land,side,r,area1;
};
#define pi 3.14
int main()
{
	struct area a;
	printf("Enter the length and the side length of rectangle: ");
	scanf("%d%d",&a.length1,&a.side);
	printf("Enter the vartical length and the land length of triangle:  ");
	scanf("%d%d",&a.vartical,&a.land);
	printf("Enter the redous of the circle: ");
	scanf("%d",&a.r);
	a.area1=a.length1*a.side;
	a.area2=(float)(a.land*a.vartical/2);
	a.area3=(float)(pi*a.r*a.r);
	printf("The results: \n%d\n%.2f\n%.2f",a.area1,a.area2,a.area3);
}
