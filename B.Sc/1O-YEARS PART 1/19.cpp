#include<stdio.h>
struct student
{
	int roll,m1,m2,m3,total;
	float avg;
	char name[20];
};
int main()
{
	struct student stu[10];
	int i,n;
	printf("Enter the number of student : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter students name: ");
		fflush(stdin);
		gets(stu[i].name);
		printf("Enter students Roll: ");
		fflush(stdin);
		scanf("%d",&stu[i].roll);
		printf("Enter the marks of three subjects: ");
		fflush(stdin);
		scanf("%d%d%d",&stu[i].m1,&stu[i].m2,&stu[i].m3);
		stu[i].total=stu[i].m1+stu[i].m2+stu[i].m3;
		stu[i].avg=(float)stu[i].total/3;
		printf("\n**********************************\n");
	}
	printf("\nThe data sheet \n");
	for(i=0;i<n;i++)
	{
		fflush(stdout);
		printf("\nName: %s\n",stu[i].name);
		fflush(stdout);
		printf("\nRoll: %d\n",stu[i].roll);
		fflush(stdout);
		printf("\nMarks of three subjects:%5d,%5d,%5d\n",stu[i].m1,stu[i].m2,stu[i].m3);
		fflush(stdout);
		printf("\nTotal of three number : %d\n",stu[i].total);
		fflush(stdout);
		printf("\nAvarage of three number %.2f\n",stu[i].avg);
	}
	
}

