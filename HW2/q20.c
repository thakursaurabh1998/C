#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n, num, size1, size=0, a, b, zero, count=0, i, j=1, k, factor_count;
    int series_sum = 0, term;

    printf("Enter n: ");
    scanf("%d", &n);

    char char_array[]={'A','B','C','D','E','F'};

    num = n;
    while(num)
    {
        size++;
        num/=10;
    }
    size1 = size;

    int* num_array = (int*) malloc(size * sizeof(int));

    while(n)
    {
        i = n%16;
        n/=16;
        //printf("%d\n",n);
        num_array[size-1] = i;
    }

    for(a=0;a<size1;a++)
    {
        if(num_array[a]>9)
        {
            printf("%c",char_array[num_array[a]-10]);
        }
        else
        {
            printf("%d",num_array[a]);
        }
    }
    free(num_array);
    return 0;
}