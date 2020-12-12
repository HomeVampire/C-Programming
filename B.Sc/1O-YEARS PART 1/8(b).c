#include<stdio.h>
int main()
{
	char a;
	printf("Enter a charecter : ");
	scanf("%d",&a);
	if(a>64&&a<91)
	printf("The charecter is capital ");
	else if(a>=97&&a<=122)
	printf("The charecter is small");
	else if(a>=0&&a<=9)
	printf("The charecter is number");
	else
	printf("The charecter is special symbol");
}
