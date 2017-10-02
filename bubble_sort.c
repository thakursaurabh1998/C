#include<stdio.h>

int main()
{
    int arr[100]={0};
    int i,j,k,n;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    //int num;
    //scanf("%d",&num);
    int temp;
    for(j=0;j<n-1;j++)
    {
        for(k=0;k<n-1;k++)
        {
            if(arr[k]>arr[k+1])
            {
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);

    return 0;
}