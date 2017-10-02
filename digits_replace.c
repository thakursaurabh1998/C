#include<stdio.h> 
#include<math.h>
int main() {
    int num,n,one, last, l_dig, f_dig ;
    int digi1,count=0;
    scanf("%d",&num);
    n = num;
    while(n>9){
        n/=10;
        count++;
    }
    //n = num;
    one = num%10;
    last = n;
    digi1 = last-one;
    if(digi1<0) {
        digi1 *= -1;
    }
    if(last>one) {
        num = num + digi1 - digi1 * pow(10,count);
    }
    else {
        num = num - digi1 + digi1 * pow(10,count);
    }
    printf("%d\n",num);
    printf("Sum = %d",last+one);
    return 0;
}