#include<stdio.h>

int main(){
    int T,i;
    long int K,max,j,N;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%ld %ld",&N,&K);
        max = 0;
        for(j=1;j<=K;j++)
            if(N%j > max)
                max = N%j;
        printf("%ld",max);
    }
    return 0;
}