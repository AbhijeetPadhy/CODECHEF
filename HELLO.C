#include<stdio.h>

int main(){
    long int T,U,N,i,j,mul,besti;
    double C[10000],M[10000],R[10000],D,best,cost;
    scanf("%ld",&T);
    for(i=0;i<T;i++){
        scanf("%lf %ld %ld",&D,&U,&N);
        mul = 1;
        for(j=0;j<N;j++){
            scanf("%lf %lf %lf",&M[j],&R[j],&C[j]);
        }
        best = D*U;
        besti = -1;
        for(j=0;j<N;j++){
            cost = C[j]/M[j] + U*R[j];
            if(cost<best){
                best = cost;
                besti = j;
            }
        }
        printf("%ld\n",besti+1);
    }
}
