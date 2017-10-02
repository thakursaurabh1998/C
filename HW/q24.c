#include<stdio.h>

int main()
{
    int n, i, a;

    printf("Enter number(num): ");
    scanf("%d", &n);
    
    //printf("%d",n);
    while(n>9)
    {
        i = 0;
        while(n)
        {
            a = n%10;
            n /= 10;
            i = a + i;
        }
        if(i>9)
        {
            n=i;
        }
    }
   
    printf("%d\n",i);
    
    return 0;
}