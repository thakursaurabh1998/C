#include<stdio.h>
#include<stdlib.h>

/*int main()
{   //comparison of a and b using xor
    int a,b;
    scanf("%d %d", &a,&b);

    if(a^b)
    {
        printf("Not equal!\n");
    }
    else
    {
        printf("Equal\n");
    }
    return 0;
}*/

/*int main()
{
    //print bit of desired position
    int a,b;
    scanf("%d %d", &a,&b);

    a = a>>(b-1);
    if(a&1==1)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}*/

/*int main()
{
    //count 0 and 1
    int a,count_1=0,count_0=0;
    scanf("%d", &a);

    while(a)
    {
        if(a&1==1)
        {
            count_1++;
        }
        else
        {
            count_0++;
        }
        a = a>>1;
    }
    printf("number of 1's = %d\nnumber of 0's = %d\n",count_1,count_0);
    
    return 0;
}*/

    /*int main()
    {   
        //trailing 0's
        int a,count_1=0,count_0=0;
        scanf("%d", &a);
        int trail=0;

        while(a)
        {
            if(a&1==1)
            {
                break;
            }
            else
            {
                trail=1;
                count_0++;
            }
            a = a>>1;
        }
        if(trail==1)
        {
            printf("number of trailing 0's = %d\n",count_0);
        }
        else
        {
            printf("no trailing 0's");
        }
        return 0;
    }*/

/*int main()
{
    //consecutive 1's
    int a,count_1=0,count_0=0;
    scanf("%d", &a);
    while(!(a&1==1))
    {
        a = a>>1;
    }
    a = a>>1;
    count_1++;
    while(a)
    {
        if(a&1==1)
        {
            count_1++;
        }
        else
        {
            break;
        }
        a = a>>1;
    }
    if(count_1==1)
    {
        printf("No consecutive 1's.\n");
    }
    else
    {
        printf("number of consecutive 1's = %d\n", count_1);
    }
        return 0;
}*/

int main()
{   
    //leading 0's
    int a, size, count=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    int lead=0;
    size = sizeof(a) * 8;

    while(a)
    {
        count++;
        a = a>>1;
    }

    printf("number of leading 0's = %d\n",size-count);
    printf("Position of highest set bit = %d\n", count);
    return 0;
}

