#include<stdio.h>

int main()
{
    int n, m, i;

    printf("Enter number m & n: ");
    scanf("%d %d", &m, &n);

    for(m;m<=n;m++)
    {
        printf("%d\n",(m*m));
    }    

    return 0;
}