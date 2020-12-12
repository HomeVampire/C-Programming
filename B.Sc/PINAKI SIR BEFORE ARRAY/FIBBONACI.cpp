#include <stdio.h>
int main()
{
    int a,b=0,c=1,i,k;

    printf("Enter a no:");
    scanf("%d",&a);
	printf("%d%d",b,c);
    for(i=1;i<=a-2;i++)
    {
        k=b+c;
        b=c;
        c=k;
        printf("\n%d",k);
    }
    
    return 0;
}
