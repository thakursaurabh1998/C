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
    return prime;
}

int rotate(int num, int count)
{
    int rem=num%10;
    num/=10;
    num += rem*pow(10,count);

    return num;
}

int main()
{
    int num,i,j;
    scanf("%d",&num);
    int n=num, count=0;
    while(n)
    {
        count++;
        n/=10;
    }
    int ct = count;
    ct--;
    n=num;
    if(prime(num))
    {
        while(--count)
        {
            num = rotate(num,ct);
            if(!prime(num))
                break;
        }
    }
    if(!count)
        printf("Interesting Prime Number");
    else
        printf("Not Interesting Prime Number");

    return 0;
}