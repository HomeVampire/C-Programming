#include<stdio.h>
int vowel(char[]);
int main()
{
	char a[100];
	int x;
	printf("Enter a text: ");
	gets(a);
	x=vowel(a);
	printf("The total number of vowel is : %d",x);
}
int vowel(char a[100])
{
	int c=0,i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		c++;
	}
	return(c);
}

