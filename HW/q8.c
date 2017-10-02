#include<stdio.h>

int main()
{
    int n, i=2;

    printf("Enter number(n): ");
    scanf("%d", &n);
    
    while(n>=i)
    {
        if(n%i==0 && n!=i)
        {
            printf("Not Prime");
            return 1;
        }
        else if(n==i)
        {
            printf("Prime");
        }
        i++;
    }

    return 0;
}