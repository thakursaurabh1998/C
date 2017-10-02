#include<stdio.h>

int main()
{
    int n, i, j, term_sum, series_sum;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        term_sum = 0;
        for(j=1; j<=i; j++)
        {
            term_sum += j; 
        }
        series_sum += term_sum;
    }
    printf("Sum of series = %d", series_sum);

    return 0;    
}