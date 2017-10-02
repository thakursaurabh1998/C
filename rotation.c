#include<stdio.h>
#include<math.h>

int main(){
    long long N,num,a,i,j;
    int rot,count=0;

    scanf("%Ld %d",&N, &rot);
    num = N;
    while(num){
            num/=10;
            count++;
    }
    num = N;
    for(rot;rot>0;rot--){
        a = N%10;
        N/=10;
        N += a*pow(10,(count-1));        
    }
    printf("%Ld",N);

    return 0;
}