#include<stdio.h>

int main(){
    long long int T,N,i,sum;
    scanf("%lld",&T);
    for(i=0;i<T;i++){
        scanf("%lld",&N);
        sum = 0;
        //flag1
        sum += N*(N-1)*(N-1);
        //flag2
        sum += N*(N-1)*(N-1);
        //flag3
        sum += N*(N-1)*(N-2);
        //flag4
        sum += N*(N-1)*(N-2)*(N-2);
        //flag5
        sum += N*(N-1)*(N-2)*(N-2);
        printf("%lld\n",sum);
    }
    return 0;
}
