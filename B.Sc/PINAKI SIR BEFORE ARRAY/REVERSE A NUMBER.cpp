#include <stdio.h>
int main()
{
   int n,i=0;
 
   printf("Enter a number");
   scanf("%d",&n);
 
   while(n!=0)
   {
      i=i*10;
      i=i+n%10;
      n=n/10;
   }
   printf("Reverse is=%d",i);
 
return 0;
}
