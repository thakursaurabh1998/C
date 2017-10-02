#include<stdio.h>

int main()
{
    int fac=1, n, i;

    printf("Enter(n): ");
    scanf("%d", &n);
    
    for(i=n;i>0;i--)
    {
        fac *= i;
    }
    printf("%d! = %d\n",n,fac);
    
    return 0;
}