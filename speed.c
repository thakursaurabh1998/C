#include<stdio.h>

int main()
{   
    float distance, speed, time_s;

    printf("Enter distance and time taken: ");
    scanf("%f%f", &distance, &time_s);
    speed = distance/time_s;
    printf("Speed = %f\n", speed);

    return 0;
}