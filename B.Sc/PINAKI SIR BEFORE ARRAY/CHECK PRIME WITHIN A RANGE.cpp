#include <stdio.h>
#include<conio.h>
int main()
{
    int n,i,flag=0,n1,n2;
	printf("\n Enter a range");
	scanf("%d%d",&n1,&n2);
	while(n1<=n2)
	{
    for(i=2;i<=n1/2;i++)
    {
    	flag=0;
        if(n1%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("\n%d is a prime number.\n",n1);
    else
        printf("\n%d is not a prime number.\n",n1);
    n1++;
	}
   getch();
    return 0;
}
