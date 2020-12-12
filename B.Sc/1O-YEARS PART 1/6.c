#include<stdio.h>
int main()
{
	int i;
	char a[26];
	printf("Enter a text: ");
	gets(a);
	puts(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==(97+122)/2+1)
		;
		else if(a[i]<(97+122)/2+1)
		a[i]=((97+122)/2-a[i])+(97+122)/2+1;
		else if(a[i]>(97+122)/2+1)
		a[i]=((97+122)/2-a[i])+(97+122)/2+1;
		else
		;
	}
	puts(a);
}
