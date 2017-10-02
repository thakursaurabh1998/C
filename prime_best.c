#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, prime_factor_count=0;

    printf("Enter number(n): ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            prime_factor_count++;
        }
    }
    printf("%d is %s", n, prime_factor_count==2?"prime":"not prime");
    
    return 0;
}