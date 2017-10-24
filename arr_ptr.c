#include<stdio.h>

int main()
{
    int n, i, p;
    int a[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter the position whose element you want to print: ");
    scanf("%d",&p);

    printf("%d", *(a+p-1));
    return 0;
}