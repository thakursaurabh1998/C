#include<stdio.h>

int main()
{
    float PI=3.14, r, area;

    printf("Enter radius");
    scanf("%f",&r);
    area = PI * r * r;
    printf("Area of circle of radius %f = %f\n",r,area);

    return 0;    
}