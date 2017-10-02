#include<stdio.h>
#include<math.h>
int main()
/*{
    int num, i, j, flag=0;

    scanf("%d",&num);
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
         printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
    return 0;
}*/

{
   int num, i, j, flag=0;

    scanf("%d",&num);
    j = sqrt(num);
    for(i=2;i<j;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
         printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
    return 0; 
}