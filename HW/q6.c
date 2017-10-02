#include<stdio.h>

int main()
{
    int a=0, b=1, c, n, i;

    printf("Enter number of terms to print(n): ");
    scanf("%d", &n);
    
    for(i=0;i<n;i++)
    {
        printf("%d\n",a);
        c=b;
        b=a+b;
        a=c;
    }
    return 0;
}