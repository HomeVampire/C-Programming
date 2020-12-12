#include <stdio.h>
int main()
{
    int n,d=0,b=1,r;
 
    printf("\nEnter a octal no.");
    scanf("%d", &n);
    while(n>0)
    {
        r=n%10;
        d=d+r*b;
        n=n/10 ;
        b=b*8;
    }
    printf("\n decimal is=%d",d);
    
return 0;
}
