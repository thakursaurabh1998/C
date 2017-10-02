#include<stdio.h>
#include<math.h>

/*int main()
{
    //GCD

    int x,y,i,j,temp;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    //printf("x = %d y = %d\n",x,y);
    for(i=x;i>0;i--)
    {
        if(x%i==0 && y%i==0)
        {
            break;
        }
    }
    printf("GCD of %d and %d = %d",x,y,i);

    return 0;
}*/

/*int main()
{
    int count=0, num, a,i;
    scanf("%d",&num);
    if(!num)
    {
        printf("0");
        goto last;
    }
    while(1)
    {
        if((pow(2,count)>num) || num==1)
        {
            if(num==1)
            {
                count=1;
            }
            break;
        }
        count++;
    }
    for(i=1;i<=count;i++)
    {
        a = num >> count-i;
        if(a&1==1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    last:

    return 0;
}*/

/*int main()
{
    int num,prime,a,i,j,powerful;

    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(!(num%i))
        {
            prime = 1;
            for(j=2;j<i;j++)
            {
                if(!(i%j))
                {
                    prime = 0;
                    break;
                }
            }
            //printf("%d %d prime\n",i,prime);
            if(prime==1)
            {
                powerful = (num%(i*i))==0;
                if(!powerful)
                {
                    break;
                }
            }
        } 
    }
    if(powerful)
        {
            printf("Powerful Number.");
        }
        else
        {
            printf("Not powerful");
        }
}*/

int main()
{
    float num,i,j;
    scanf("%f",&num);
    i = num;
    int sum=0,cons=0,a;

    for(a=1;a<i;a++)
    {
        //printf("%d\n",j);
        sum += a;
        if(sum==num)
        {
            cons=1;
            break;
        }
    }
    //printf("%d\n",sum);
    if(cons)
    {
        printf("Sum of consecutive numbers");
    }
    else
    {
        printf("Not a sum of consecutive numbers");
    }
    return 0;
}
