/*reverse the elemnts of array */
#include<stdio.h>
int reverse(int[],int);
int main()
{
    int a[20], i, n;
    printf("\nEnter Limit of Array\n");
    scanf("%d", &n);
    printf("\nEnter Array Elements\n");
    for(i = 0; i < n; i++)  
        scanf("%d", &a[i]);   
    reverse(a, n);
    printf("\n");
}
int reverse(int a[], int n)
{
    int i, j, temp;
    printf("Reverse of 1-D Array\n");
    for(i = 0, j = n - 1; i <= n/2; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}


