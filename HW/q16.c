#include<stdio.h>

int main()
{
    int num=1, x, n, i, a;

    printf("Enter number(num): ");
    scanf("%d", &n);
    printf("Enter power of number(^x): ");
    scanf("%d", &x);
    
    for(i=0;i<x;i++)
    {
        num *= n;
    }
    printf("%d\n",num);

    return 0;
}