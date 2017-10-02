#include<stdio.h>
/*NTH PRIME NUMBER IN A GIVEN RANGE*/
int main()
{
    int m, n, k, p, factor_count,count=0;
    printf("Enter range in which you want to print prime numbers: ");
    scanf("%d %d %d", &m, &n,&p);//p is nth number to be printed

    for(m;m<=n;m++)
    {
        k=1;
        factor_count=0;
        while(m>=k)
        {
            //printf("k=%d \nfact=%d\n",k,factor_count);
            if(!(m%k))
            {
                factor_count++;
            }
            k++;
        }
        if(factor_count==2)
        {
            count++;
            if(p==count)
            {
                break;
            }
        }
    }
    printf("%d",m);
    return 0;
}
