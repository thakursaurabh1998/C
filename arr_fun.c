#include<stdio.h>

int sum(int a, int b)
{
    return a+b;
}

int pro(int* arr, int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",*(arr+i));
}

void arr_ptr(int a[5])
{
    a[4]= 0;
}

int dia_sum(int* b[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum+= b[i][i];
    
    return sum;
}

int sum_row(int a[3][3],int m,int n)
{
    int i,j;
    int r[1][3]={0};
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            r[0][i] += a[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
        printf("%d\n",r[0][i]);
    }

    return r[1][3];
}

void up_tri(int b[3][3],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)
                printf("%d\t",b[i][j]);
            else
                printf("0\t");
        }
        printf("\n");
    }
}

void low_tri(int b[3][3],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
                printf("%d\t",b[i][j]);
            else
                printf("0\t");
        }
        printf("\n");
    }
}

void symmetric(int a[3][3],int m, int n)
{
    int i,j,flag=1;
    int p[3][3];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            p[j][i] = a[i][j];
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            //printf("%d\t",p[i][j]);
            if(p[i][j]!=a[i][j])
            {
                flag = 0;
                break;
            }
        }
        //printf("\n");
    }

    printf("%ssymmetric\n",flag?"":"Not ");    
}

int main()
{
    int i;
    int n=5;
    int b [3][3]={
        {5,6,7},
        {7,8,10},
        {1,2,3}
    };
    int c [3][3]={
        {1,7,1},
        {7,8,2},
        {1,2,3}
    };
    int a[5]={10,20,30,40,50};
    /*for(i=0;i<n-1;i++)
        printf("%d\n",sum(a[i],a[i+1]));*/
    //pro(a,n);
    //arr_ptr(a);

    //printf("%d",dia_sum(b[],3));

    //printf("%d",a[4]);
    int p[1][3];
    //p[1][3]=sum_row(b,3,3);
/*for(i=0;i<3;i++)
    {
        printf("%d\n",p[0][i]);
    }*/
    /*up_tri(b,3,3);
    printf("\n");
    low_tri(b,3,3);*/

    symmetric(b,3,3);
    symmetric(c,3,3);

    return 0;
}