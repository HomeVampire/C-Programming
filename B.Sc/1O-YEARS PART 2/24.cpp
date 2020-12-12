#include<stdio.h>
struct student
{
	int m1,m2,m3,persentage;
};
int main()
{
	struct student stu[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter %d student 1st sub number: ",i+1);
		scanf("%d",&stu[i].m1);

		printf("Enter %d student 2nd sub number: ",i+1);
		scanf("%d",&stu[i].m2);
		printf("Enter %d student 3rd sub number: ",i+1);
		scanf("%d",&stu[i].m3);
	
	}
	for(i=0;i<5;i++)
	{
			stu[i].persentage=(stu[i].m1+stu[i].m2+stu[i].m3)/3;
		printf("%d student's persentage is %d\n",i+1,stu[i].persentage);



	}
}

