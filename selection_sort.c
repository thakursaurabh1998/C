#include<stdio.h>
#include<stdlib.h>

void swap(int* arr, int i, int j)
{
    int temp;
    temp = *(arr+i);
    *(arr+i) = *(arr+j);
    *(arr+j) = temp;
}

int main()
{
    int i,j,n;
    
    scanf("%d",&n);
    int* arr = (int*) malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    int least,index;

    for(i=0;i<n;i++)
    {
        least = arr[i];
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<least)
            {
                least = arr[j];
                index = j;
            }
        }
        if(index!=i)
        {
            swap(arr,i,index);
        }
    }
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);    

    return 0;
}