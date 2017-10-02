#include<stdio.h>

int main()
{
    int m, n, num, a=0, i=1;
    printf("Enter range in which you want to print Pefect Numbers: ");
    scanf("%d %d", &m, &n);

    for(m;m<=n;m++)
    {
        i=1;
        a=0;
        num=m;
        while(num!=i)
        {
            if(!(num%i))
            {
                a += i;
            }
            i++;
        }
        if(a==m)
        {
            printf("%d\n",m);
        }
    }
    
    return 0;
}