#include<stdio.h>

int main()
{   
    float F, C;

    printf("Enter temperature in degree celsius to convert to fahrenheit: ");
    scanf("%f",&C);
    F = (1.8f * C) + 32;
    printf("Degree Fahrenheit = %f\n", F);

    return 0;
}