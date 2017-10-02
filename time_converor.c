#include<stdio.h>

int main()
{
    int sec, min, hrs;

    printf("Enter time in seconds: ");
    scanf("%d",&sec);
    if(sec<60)
    {
        printf("Seconds: %d\n", sec);
    }
    else
    {
        min = sec/60;
        sec %= 60;
        if(min<60)
        {
            printf("Minutes: %d Seconds = %d\n",min, sec);
        }
        else
        {
            hrs = min/60;
            min %= 60;
            printf("Hours: %d Minutes: %d Seconds = %d\n",hrs, min, sec);
        }
    }
    return 0;
}