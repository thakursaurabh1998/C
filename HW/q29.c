#include<stdio.h>

int main()
{
    int num, n, i=0, a;

    printf("Enter number(num): ");
    scanf("%d", &num);
    n = num;
    
    while(n)
    {
        a = n%10;
        n /= 10;
        if(a%2)
        {
            i += a;
        }
    }
    printf("Sum of odd digits = %d",i);

    return 0;
}