//STUDENT MARKSHEET GRADATION

#include<stdio.h>
int main()
{
	int m1,m2,m3,t;
	float avg;
	printf("\n enter the marks:");
	scanf("%d%d%d",&m1,&m2,&m3);
	t=(m1+m2+m3);
	avg=(t/3);
	
	printf("\n PHY:%d",m1);
	printf("\n CHEM:%d",m2);
	printf("\n MATH:%d",m3);
	printf("\n TOTAL:%d",t);
	printf("\n AVGERAGE:%f",avg);
	
	if(avg>=75)
	printf("\n star");
	else if((avg>=60)&&(avg<75))
	printf("\n 1st division");
	else if((avg>=50)&&(avg<60))
	printf("\n 2nd division");
	else if((avg>=40)&&(avg<50))
	printf("\n 3rd division");
	else
	printf("\n **fail**");
	
return 0;	
}
