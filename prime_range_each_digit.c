#include<stdio.h>
#include<math.h>

int prime(int num)
{
    int prime = 1,i;
    for(i=2;i<num;i++)
    {
        if(!(num%i))
        {
            prime = 0;
            break;
        }
    }
    if(num==1)
        prime=0;
    return prime;
}

int main()
{
    int m,n,p,pri,count=0;

    scanf("%d %d %d",&m,&n,&p);
    while(m <= n)
    {
        if(prime(m))
            count++;
        if(count==p)
            break;
        m++;
    }
    pri=m;
    int rem;
    while(m)
    {
        rem=m%10;
        if(!prime(rem))
            break;
        m/=10;
    }
    printf("%s",(m)?"NO":"YES");
    return 0;
}