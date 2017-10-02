#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, j=1;
    float den, series_sum = 0.0, term;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        den = pow(j,1);
        term = (1.0/den);
        series_sum += term;
        j+=2;
    }
    printf("Sum of series = %f", series_sum);

    return 0;    
}