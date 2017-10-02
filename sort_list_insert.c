#include<stdio.h>

int main()
{
    int arr[100]={0};
    int i,j,k,n;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int num;
    scanf("%d",&num);

    for(j=n-1;arr[j]>num;j--)
    {
        arr[j+1]=arr[j];
    }
    arr[j+1] = num;

    for(i=0;i<n+1;i++)
        printf("%d\t",arr[i]);

    return 0;


}