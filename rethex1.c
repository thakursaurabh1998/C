#include<stdio.h>
#include<string.h>

int main()
{
    int a=4, b=0, c=-3, res;
    //res = b>10 || b && c < 0 || a>0;
    res = b && c < 0;
    res = (0 && 1 || 1);
    printf("%d\n",res);
    float p = a/2.0;
    int q = a&&b;

    printf("%d\n",q);
    printf("%-40.14s", "Welcome to C programing.\n");
    int n = 2;
    printf("%d %d %d\n", n++,n,++n);

    return 0;
}