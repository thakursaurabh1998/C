#include<stdio.h>

int main()
{
    int num, n, i=0, a, small=9, great=0;

    printf("Enter number(num): ");
    scanf("%d", &num);
    n = num;
    
    while(n)
    {
        a = n%10;
        n /= 10;
        if(a>great)
        {
            great = a;
        }
        if(a<small)
        {
            small = a;
        }

    }
    printf("Smallest = %d\nGreatest = %d\n",small,great);
    
    return 0;
}