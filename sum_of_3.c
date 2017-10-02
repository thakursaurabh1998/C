#include<stdio.h>

int main()
{
    int n, a, b=0;

    scanf("%d",&n);
    while(n)
    {
        a = n%10;
        n/=10;
        //printf("%d\n",n);
        b = a + b;
    }
    printf("%d\n", b);
    return 0;
}