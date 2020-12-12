#include<stdio.h>
#include<process.h>
int main()
{
	FILE *fp1,*fp2;
	char a[100],b[100];
	int n,i;
	fp1=fopen("country.txt","w");
	fp2=fopen("capital.txt","w");
	printf("Enter total number of country: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter country and corrosponding ");
		fflush(stdin);
		gets(a);
		fprintf(fp1,"%s\n",a);
		fflush(stdin);
		gets(b);
		fprintf(fp2,"%s\n",b);
	}
	fclose(fp1);
	fclose(fp2);
	fp1=fopen("country.txt","r");
	fp2=fopen("capital.txt","r");
	for(i=0;i<n;i++)
	{
		fscanf(fp1,"%s",a);
		fscanf(fp2,"%s",b);
		printf("The capital of %s is %s\n",a,b);
	}
	fclose(fp1);
	fclose(fp2);
	return(0);
}

