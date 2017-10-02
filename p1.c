#include<stdio.h>

int main()
{
    int i,n,flag,num;
    scanf("%d",&n);
    int arr[100]={0};
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter number to search: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            flag = 1;
            break;
        }
    }
    return 0;
}