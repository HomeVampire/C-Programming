/* digit to word*/
#include <stdio.h>

int main()
{
    int n,m, num=0,count=0;

    printf("Enter any number to print in words: ");
    scanf("%d", &n);
	m=n;
    while(n!= 0)
    {
        num=(num*10)+(n%10);
        n=n/10;
        count++;
    }
    while(count>0)
    {
        switch(num % 10)
        {
            case 1: printf("One ");
                break;
            case 2: printf("Two ");
                break;
            case 3: printf("Three ");
                break;
            case 4: printf("Four ");
                break;
            case 5: printf("Five ");
                break;
            case 6: printf("Six ");
                break;
            case 7: printf("Seven ");
                break;
            case 8: printf("Eight ");
                break;
            case 9: printf("Nine ");
                break;
            default: printf("Zero ");
            	break;
        }
        
        num = num / 10;
        count--;
    }

    return 0;
}
