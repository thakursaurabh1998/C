#include<stdio.h>
#include<math.h>

int main()
{
    int n, lcm, a, b, zero, count=0, i, j=1, k, factor_count;
    int series_sum = 0, term;

    printf("Enter n: ");
    scanf("%d", &n);

    zero = 'y';
    while(n)
    {
        i = n%8;
        n/=8;
        //printf("%d\n",n);
        if(i!=0)
        {
            zero='n';
        }
        if(zero=='n')
        {
            series_sum = series_sum*10 + i;
        }
        else
        {
            series_sum = series_sum*10 + i;
            count++;
        }
    }
    //series_sum = series_sum*10 + i;
    printf("%d\n",series_sum);

    while(series_sum)
    {
        a = series_sum%10;
        series_sum/=10;
        //printf("%d\n",n);
        b = a + b*10;
    }
    b = b * pow(10,count);

    printf("%d",b);

    return 0;
}