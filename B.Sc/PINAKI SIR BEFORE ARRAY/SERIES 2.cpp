#include <stdio.h>
int main()
{
    int n,i,s=1;
	printf("\n Enter a no");
	scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
        	s=s+i;
        else
        	s=s-i;
    }
        printf("Answear=%d",s);
    return 0;
}
