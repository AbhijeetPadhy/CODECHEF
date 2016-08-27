#include<stdio.h>

int main(){
    int T,M,N,i,j,k;
    int A[1001][1001], B[1001][1001];
    double sum;
    scanf("%d",&T);
    for(j=1;j<=N;j++)
            for(k=1;k<=M;k++){
                A[j][k] = 0;
                B[j][k] = 0;
            }
    for(i=0;i<T;i++){
        sum = 0;
        scanf("%d %d",&N,&M);
        printf("%lf\n",N*1.0+M-1);
    }
    return 0;
}
