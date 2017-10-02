#include<stdio.h>

int main()
{
    int num,i,j,prime1=1,prime2 = 1,n2;
    scanf("%d",&num);
    
    for(i=num/2;i>0;i--)
    {
        prime1 = 1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime1 = 0;
                break;
            }
        }
        
        if(prime1==1)
        {
            n2 = num - j;
            prime2=1;
            for(j=2;j<n2;j++)
            {
                if(n2%j==0)
                {
                    prime2 = 0;
                }
            }
            if(prime2==1)
            {
                printf("%d + %d = %d\n",i,n2,num);
            }
        }
    }
    return 0;    
}
