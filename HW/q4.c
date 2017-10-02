#include<stdio.h>

int main()
{
    int m, n, sum=0;

    printf("Enter 2 number range(seperated by space): ");
    scanf("%d %d", &m, &n);
    printf("Sum of odd numbers:\n");
    while(m<=n)
    {
        if(m%2)
        {
            sum += m;
        }
        m++;
    }
    printf("%d\n",sum);

    return 0;
}