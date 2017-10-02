#include<stdio.h>

int main()
{
    int temp, x, y;

    printf("input x and y: ");
    scanf("%d%d", &x, &y);
	temp = x;
    x = y;
    y = temp;

    printf("x = %d\ny = %d\n", x,y);
    return 0;
}