#include<stdio.h>

int main(){
    int T,i;
    long long int N,sum;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%lld",&N);
        sum=0;
        sum+= N/100;
        N%=100;
        sum+= N/50;
        N%=50;
        sum+= N/10;
        N%=10;
        sum+= N/5;
        N%=5;
        sum+= N/2;
        N%=2;
        sum+=N;
        printf("%lld\n",sum);
    }
    return 0;
}