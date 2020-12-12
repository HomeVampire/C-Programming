#include<stdio.h>
int main()
{
	char a[100];
	int l,i,j=0;
	
	printf("Enter a string: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' '||a[i+1]!=' ')
		{
			a[j++]=a[i];
		}
	}
	a[j]='\0';
	puts(a);
	return(0);
}


