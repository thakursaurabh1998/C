#include<stdio.h>

int main()
{
    int n, i=0, a;

    printf("Enter number(num): ");
    scanf("%d", &n);
    
    while(n)
    {
        a = n%10;
        n /= 10;
        i = a + i;
    }
    printf("%d\n",i);
    
    getch();

    return 0;
}