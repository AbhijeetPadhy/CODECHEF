#include<stdio.h>

int main(){
    int T,N,M,A[100],
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d %d",&N,&M);
        for(j=0;j<M;j++){
            scanf("%d %d",&m1,&m2);
            if(A[m1]!=0 && A[m2]!=0){
                A[m1] = A[m2];
            }
        }
    }
    return 0;
}
