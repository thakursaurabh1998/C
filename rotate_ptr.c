#include<stdio.h>

void rotate(int* a, int n, int num)
{
    int i,temp;
    while(num--)
    {
        temp = a[0];
        for(i=0;i<n-1;i++)
            a[i] = a[i+1];
        a[n-1] = temp;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}

int main()
{
    int n, num, i, j;
    int a[100]={0};
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter number of rotations: ");
    scanf("%d",&num);

    rotate(a, n, num);
    return 0;
}