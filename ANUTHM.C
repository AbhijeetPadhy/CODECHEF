#include<stdio.h>

int prob(int A[1001][1001], int B[1001][1001], int N, int M, int i, int j){
    int a,b;
    if(i>N || j>M)
        return 0;
    if(i==N && j==M){
        A[i][j]++;
        return 1;
    }
    if(B[i][j] == 0){
        a= prob(A,B,N,M,i+1,j);
        b= prob(A,B,N,M,i,j+1);
        B[i][j] += a+b;
        A[i][j] += a+b;
    }
    else
        A[i][j] += B[i][j];
    return B[i][j];
}

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
        
        prob(A,B,N,M,1,1);
        for(j=1;j<=N;j++){
            for(k=1;k<=M;k++){
                //printf("%d ",A[j][k]);
                sum += (A[j][k]*1.0)/A[N][M];
                A[j][k] = 0;
                B[j][k] = 0;
            }
            //printf("\n");
        }
        printf("%lf\n",sum);
    }
    return 0;
}
