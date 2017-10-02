#include<stdio.h>

int linear_search(int* arr,int n,int num)
{
    int i,flag;
    for(i=0;i<n;i++)
    {
        flag=0;
        if(arr[i]==num)
        {
            flag=1;
            return 1;
        }
    }

    return 0;
}

int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[100]={0};
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int num;
    printf("\nEnter number to search : ");
    scanf("%d",&num);

    printf("%sFound",linear_search(arr,n,num)?"":"Not ");
    int y;
    
    return 0;
}