#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,s;

    printf("Enter 3 sides of triangle: ");
    scanf("%f %f %f",&a,&b,&c);

    s = (a+b+c)/2;

    double area = s*(s-a)*(s-b)*(s-c);

    printf("Area = %f\n", sqrt(area));

    return 0;
}