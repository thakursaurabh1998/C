#include<stdio.h>

int main()
{
    int m, n, a, num, i=0;
    printf("Enter range in which you want to print Armstrong Numbers: ");
    scanf("%d %d", &m, &n);

    for(m;m<=n;m++)
    {
        i=0;
        num=m;
        while(num)
        {
            a = num%10;
            num /= 10;
            i += (a*a*a);
        }
        if(i==m)
        {
            printf("%d\n",m);
        }
    }
    
    return 0;
}