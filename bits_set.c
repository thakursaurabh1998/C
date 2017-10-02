#include<stdio.h>
#include<math.h> 

int main()
{
    int num, a, count=0;
    printf("Enter Number: ");
    scanf("%d",num);

    a = sizeof(num) * (8);

    while(num)
    {
        if(num&1==1)
        {
            count++;
        }
        else
        {
            break;
        }
        num = num >> 1;        
    }

    if(count==a)
    {
        printf("All bits are set.\n");
    }
    else
    {
        printf("Bits are unset.\n");
    }

    return 0;
}