#include<stdio.h>

int main()
{
    int m, n, even=0, odd=0;

    printf("Enter 2 number range(seperated by space): ");
    scanf("%d %d", &m, &n);
    while(m<=n)
    {
        if(m%2)
        {
            odd++;
        }
        else
        {
            even++;
        }
        m++;
    }
    printf("Number of odd numbers: %d\n",odd);
    printf("Number of even numbers: %d\n",even);

    return 0;
}