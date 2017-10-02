#include<stdio.h>

int main()
{
    int arr[100]={0};
    int i,j,k,num,n,p=0;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
a:
    printf("Enter number that you want to delete: ");
    scanf("%d",&num);

    int flag=0;

    for(i=0;i<n;i++)
    {
        if(num==arr[i])
        {    
            flag=1;
            p=i;
            break;
        }
    }
    if(flag)
    {
        for(i=p;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
    }
    else
    {
        printf("Number doesn't exist, please try again.\n");
        goto a;
    }
    
    for(i=0;i<n-1;i++)
        printf("%d\t",arr[i]);

    return 0;
}