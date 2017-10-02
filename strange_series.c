#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
..............

..............

20 22 24 26 28

11 13 15 17 19

10 12 14 16 18

 1  3  5  7  9

 0  2  4  6  8
 */

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long r,p,count=0,i=0,out;
    int c,q,columns=5;
    scanf("%Ld %d",&r,&c);
    for(p=1;p<=r;p++)
    {
        if(p==r)
            columns=c;
        for(q=1;q<=columns;q++)
        {
            out = count;
            count+=2;
        }
        count-=2; 
        if(p%2)
            count = ++i;
        else
        {
            count++;
            i=count;
        }
    }
    printf("%Ld",out);
    return 0;
}
