#include<stdio.h>

int main()
{
    int arr[100]={0};
    int i,j,k,n,p=0,q=0;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int largest=arr[0],smallest=arr[0];
    for(j=0;j<n;j++)
    {
        if(arr[j]>largest)
        {
            largest=arr[j];
            p=j;
        }
        if(arr[j]<smallest)
        {    
            smallest=arr[j];
            q=j;
        }
    }
    
    int temp=arr[p];
    arr[p]=arr[q];
    arr[q]=temp;

    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);

    return 0;
}