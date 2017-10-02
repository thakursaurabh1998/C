#include<stdio.h>

void sort(int* arr,int n)
{
    int temp,j,k;
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
}

int bin_search(int* arr,int n,int num)
{
    int start,end,mid,found;
    start = 0;
    end = n-1;
    mid = (start+end)/2;
    while(arr[mid]!=num && mid<end)
    {
        printf("%d\n",arr[mid]);
        
        if(*(arr+mid)>num)
        {
            end = mid-1;
        }
        else if(*(arr+mid)<num)
        {
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    if(*(arr+mid) == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[100]={0};
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr,n);
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);

    int num;
    printf("\nEnter number to search : ");
    scanf("%d",&num);

    printf("%sFound",bin_search(arr,n,num)?"":"Not ");
    int y;
    
    return 0;
}