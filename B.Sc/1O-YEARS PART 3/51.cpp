/*sum of digits*/
#include <stdio.h>
 
int sum (int a);
 
int main()
{
    int num, result;
 
    printf("Enter the number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}
 
int sum (int num)
{
    int rem,temp=0;
	if (num != 0)
	{
    while(num != 0)
	{
        rem=num%10;
		temp=temp+rem;
		num=num/10;
    }
    return (temp);
	}
    else
    {
       return 0;
    }
}
