#include<stdio.h>

int main()
{
    int m, n, a, num, i=0;
    printf("Enter range in which you want to print palindromes: ");
    scanf("%d %d", &m, &n);

    for(m;m<=n;m++)
    {
        i=0;
        num=m;
        while(num)
        {
            a = num%10;
            num /= 10;
            i = a + i*10;
        }
        if(i==m)
        {
            printf("%d\n",m);
        }
    }
    
    return 0;
}