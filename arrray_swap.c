#include<stdio.h>

int main()
{
    int n, num, i, j;
    int a[100]={0};
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("New Number: ");
    scanf("%d",&num);
    printf("New Position: ");
    scanf("%d",&j);

    for(i=n;i>=j-1;i--)
    {
        a[i]=a[i-1];
        if(i==j-1)
        {
            a[i]=num;
        }
    }
    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}