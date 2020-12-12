#include <stdio.h>
int main()
{
    int n,i,s=0;
	printf("\n Enter a no");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
		s=s+i;
    printf("Answear=%d",s);
    return 0;
}
