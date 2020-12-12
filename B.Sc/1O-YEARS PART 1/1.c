#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp;
	int ch,n;
	char a[10];
	fp=fopen("abc.txt","a");
	fprintf(fp,"Depertment\tnumber of student\n");
	fclose(fp);
	while(1)
	{
		printf("1. Enter record\n2. exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: fp=fopen("abc.txt","a");
					printf("Enter department name :");
					fflush(stdin);
					gets(a);
					printf("Enter number of students: ");
					fflush(stdin);
					scanf("%d",&n);
					fprintf(fp,"%s\t\t\t%d\n",a,n);
					fclose(fp);
			break;
			case 2: exit(0);
			
			default: printf("\nWrong input\n");
		}
	}
}
