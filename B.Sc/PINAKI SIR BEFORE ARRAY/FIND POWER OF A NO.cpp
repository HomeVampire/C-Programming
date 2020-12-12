#include <stdio.h>
int main()
{
    int a,b,j=1,i;

    printf("Enter a no:");
    scanf("%d",&a);
	printf("Enter a power:");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
			j=j*a;
		printf("answear=%d",j);   
   
    return 0;
}
