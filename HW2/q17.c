#include<stdio.h>
#include<math.h>

int main()
{
    int n, i=0, a, b=0;

    printf("Enter n: ");
    scanf("%d", &n);

    while(n)
    {
        a = n%10;
        n/=10;
        b = b + a*pow(2,i);
        i++;
    }
    printf("%d\n", b);
    return 0;
}