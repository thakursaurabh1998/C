#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int i,j=0;
    char* str = (char*) malloc(sizeof(char)*10000);
    while(n--)
    {   
        i=0;
        do
        {
            scanf("%c",&str[i]);
            i++;
        }while(str[i]);
        i=0;
        while(str[i])
        {
            if(!(i%2))
            {
                printf("%c",str[i]);
            }
            i++;
        }
        printf("\nstring = %s\n",str);
        i=0;
        printf(" ");
        while(str[i])
        {
            if(i%2)
            {
                printf("%c",str[i]);
            }
            i++;
        }
        printf("\n");
        i=0;
        while(str[i])
        {
            str[i]=0;
            i++;
        }
    }
    return 0;
}
