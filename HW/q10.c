#include<stdio.h>

int main()
{
    int num, n, i=0, a;

    printf("Enter number(num): ");
    scanf("%d", &num);
    n = num;
    
    while(n)
    {
        a = n%10;
        n /= 10;
        i = a + i*10;
    }
    printf("%d\n",i);
    
    getch();

    return 0;
}