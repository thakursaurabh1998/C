#include<stdio.h>

int main() {
    int n[2][2]={
        {1,2},
        {3,4}
    }; 
    int m[2][2]={
        {5,6},
        {7,8}
    };

    int prod[2][2];
    int j,i;
   /* for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }*/
    int l,p=0,pro,sum;
    
    for(i=0;i<2;i++)
    {
        sum=0;
        for(j=0;j<2;j++)
        {
            pro = n[i][j] * m[j][i];
            //printf("%d\n",sum);
            sum += pro;
            prod[i][p]=sum; 
        }
        printf("prod = %d\n",prod[i][p]);
        p = (p+1)%2;
    }
    /*for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",m[j][i]);
        }
        printf("\n");
    }*/
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",prod[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}