#include<stdio.h>

int main()
{   
    float P, R, T, SI;

    printf("Enter principal amount, rate of interest and time: ");
    scanf("%f%f%f",&P,&R,&T);
    R/=100;
    SI = P * R * T;
    printf("Simple Interest = %f\n", SI);

    return 0;
}