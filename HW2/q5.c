#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, j;
    int series_sum = 0, term;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        term = pow(i,3);
        series_sum += term;
    }
    printf("Sum of series = %d", series_sum);

    return 0;    
}