/*all the prime nos in range*/
#include <stdio.h>
int main()
{
	int i,j,flag=0,n;
	printf("\n Enter the range");
	scanf("%d",&n);
 for( i=2;i<n;i++)
 {
  for(j=2;j<i;j++)
  {
   if(i%j==0)
   {
   	flag=0;
    break;
   }
   else
      flag=1;
  }
  if(flag==1)
  printf("\n%d",i);
  flag=0;
  
 }
}
