#include<stdio.h>

int main()
{
    int n, i=1;

    printf("Enter number(n): ");
    scanf("%d", &n);
    printf("Factors of %d are:\n",n);
    
    while(n>=i)
    {
        if(!(n%i))
        {
            printf("%d\t",i);
        }
        i++;
    }

    return 0;
}