#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, j=2;
    int series_sum = 0, term;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        term = pow(j,3);
        series_sum += term;
        j+=2;
    }
    printf("Sum of series = %d", series_sum);

    return 0;    
}