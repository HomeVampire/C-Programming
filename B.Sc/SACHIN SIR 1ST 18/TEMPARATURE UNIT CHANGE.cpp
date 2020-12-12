//TEMPARATURE UNIT CHANGE

#include<stdio.h>
int main()
{
	int ch,f,c;
	printf("\n 1.C to F \n 2.F to C");
	scanf("%d",&ch);
	switch(ch)
		{
			case 1:
					printf("\n C=");
					scanf("%d",&c);
					f=((9*c)/5+32);
					printf("\n Farenhite=%d",f);
					break;
					
			case 2:
					printf("\n F=");
					scanf("%d",&f);
					c=(5*(f-32)/9);
					printf("\n Celcius=%d",c);
					break;
			default:
				printf("\n Wrong Input");
		}
return 0;
}
