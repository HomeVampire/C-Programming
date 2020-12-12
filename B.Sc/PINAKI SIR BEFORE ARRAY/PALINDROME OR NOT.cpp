#include<stdio.h>
int main()
{
    int n,ri=0,rem,oi;

    printf("\n Enter an integer: ");
    scanf("%d",&n);
    oi=n;
    while(n!=0)
    {
        rem=n%10;
        ri=ri*10+rem;
        n=n/10;
    }
    if (oi==ri)
        printf("\n %dis a palindrome.",oi);
    else
        printf("\n %dis not a palindrome.",oi);
    
    return 0;
}
