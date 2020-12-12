/* before sorted*/
#include <stdio.h>
 int main()
{
    int a[10],b[10];
    int i, j, n,temp;
 
    printf("Enter the value \n");
    scanf("%d",&n);
    printf("Enter the elements one by one \n");
    for (i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for (i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for (i = 0;i<n;i++)
    {
        for (j =0;j<(n-i-1);j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
	}
for(i=0;i<n;i++)
   {
   	if(a[0]==b[i])
   	printf("\n The position of minimum number in previous array:%d",i+1);
   	if(a[n-1]==b[i])
   	printf("\n The position of maximum number in previous array:%d",i+1);
   }
printf("\n Sorted array is...\n");
for (i = 0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
return 0;
}
