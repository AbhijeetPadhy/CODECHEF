#include<stdio.h>

int main(){
    int T,i;
    long long int N,M,j;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%lld",&N);
        M = N&(N+1);
        if(N == 1)
            printf("%d\n",2);
        if(M == 0)
            printf("%lld\n",N/2);
        else
            printf("-1\n");
    }
    return 0;
}
