#include<stdio.h>
#include<math.h>


int main()
{
    int num,dec,powr=0,a;
    scanf("%d",&num);

    while(num)
    {
        a=num%10;
        num/=10;
        dec += a*pow(8,powr);
        powr++;
    }
    printf("%x",dec);

    return 0;
}