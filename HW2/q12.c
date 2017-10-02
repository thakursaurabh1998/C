#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, j=1, k, factor_count;
    int series_sum = 0, term;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1;i<=n;)
    {
        k=1;
        factor_count=0;
        while(j>=k)
        {
            //printf("k=%d \nfact=%d\n",k,factor_count);
            if(!(j%k))
            {
                factor_count++;
            }
            k++;
        }
        if(factor_count==2 && j!=1)
        {
            //printf("%d\n",j);
            term = pow(j,2);
            series_sum += term;
            i++;
        }
        j++;
    }

    printf("Sum of series = %d", series_sum);

    return 0;    
}