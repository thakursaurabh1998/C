#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    /*char s[200];
    gets(s);
    printf("%s",s);
    int i=0;
    while(s[i]!=0)
    {
        i++;
    }
    printf("%d",i);*/
    int i,j,k,rem;
    scanf("%d %d %d",&j,&i,&k);
    rem = i%j;
    rem+=k;
    
    printf("%d",rem);
    return 0;
}