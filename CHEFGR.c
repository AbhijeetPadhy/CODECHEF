#include<stdio.h>

int main(){
    int T,N,M,A,i,j,max,sum;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d %d", &N, &M);
        sum = 0;
        for(j=0;j<N;j++){
            scanf("%d",&A);
            sum+=A;
        }
        if((sum + M) % N == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}