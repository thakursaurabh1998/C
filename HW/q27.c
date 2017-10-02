#include<stdio.h>

int main()
{
    int num, n, i=0, a, square, original_square;

    printf("Enter number(num): ");
    scanf("%d", &num);
    n = num;
    
    while(n)
    {
        a = n%10;
        n /= 10;
        i = a + i*10;
    }
    if(i==num)
    {
        square = num * num;
        original_square=square;
        i=0;
        while(square)
        {
            a = square%10;
            square /= 10;
            i = a + i*10;
        }
        if(i==original_square)
        {
            printf("%d is a super-palindrome.\n",num);
        }
        else 
        {
            printf("%d is not a super-palindrome.\n",num);
        }
    }
    
    return 0;
}