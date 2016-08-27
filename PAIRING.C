#include<stdio.h>

int main(){
    int T,n,m,A[10001],B[10001],N[10001],stack[10001],top,i,j;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d %d",&n,&m);
        top=-1;
        for(j=0;j<m;j++){
            scanf("%d %d",&A[j],&B[j]);
        }
        for(j=0;j<n;j++)
            N[j] = 0;

        for(j=m-1;j>=0;j--){
            if(N[A[j]] == 0 && N[B[j]] == 0){
                N[A[j]] = N[B[j]] = 1;
                stack[++top] = j;
            }
        }
        while(top >= 0)
            printf("%d ",stack[top--]);
        printf("\n");
    }
    return 0;
}
