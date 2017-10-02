#include<stdio.h>

int main()
{
    int m, n;

    printf("Enter 2 number range(seperated by space): ");
    scanf("%d %d", &m, &n);
    printf("List of even numbers:\n");
    while(m<=n)
    {
        if(!(m%2))
        {
            printf("%d\n",m);
        }
        m++;
    }

    return 0;
}