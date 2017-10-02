#include<stdio.h>

int main()
{
    long long num, n, i=0, a;

    printf("Enter number(num): ");
    scanf("%Ld", &num);
    n = num;
    
    while(n)
    {
        n /= 10;
        printf("%Ld\n",n);
        i++;
    }
    printf("Number of digits in %Ld is = %d\n",num,i);
    
    getch();

    return 0;
}