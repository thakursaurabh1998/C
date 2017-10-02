#include<stdio.h>

int main()
{
    int num, n, i=1, a=0;

    printf("Enter number(num): ");
    scanf("%d", &num);
    n = num;
    
    while(n!=i)
    {
        if(!(n%i))
        {
            a += i;
        }
        i++;
    }
    printf("%d is %sa perfect number.", num, a==num?"":"not ");

    return 0;
}