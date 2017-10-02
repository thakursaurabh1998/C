#include<stdio.h>

int main()
{
    int n, m, a, num, i=0, k=1, factor_count=0;
    printf("Enter number(n): ");
    scanf("%d", &num);
    m = n = num;

    while(n)
    {
        a = n%10;
        n /= 10;
        i = a + i*10;
    }

    while(m>=k)
    {
        if(!(m%k))
        {
            factor_count++;
        }
        k++;
    }
    if(i==num && factor_count==2)
    {
        printf("%d is a prime palindrome.\n",num);
    }
    else 
    {
        printf("%d is not a prime palindrome.\n",num);
    }

    return 0;
}