#include<stdio.h>
#include<string.h>

int main(){
    int T,N,i,j,k,l,sum;
    char A[1001][1001];
    int B[1001],C[1001];

    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&N);
        for(j=0;j<N;j++){
            scanf("%s",A[j]);
            }
        sum = 0;
        for(j=0;j<N;j++){
            for(k=N-1;k>=0;k--)
                if(A[j][k] == '#')
                    break;
            for(l=N-1;l>=0;l--)
                if(A[l][j] == '#')
                    break;
            B[j] = k+1;
            C[j] = l+1;
        }
        for(j=0;j<N;j++){
            for(k=B[j];k<N;k++)
                if(C[k]<=j)
                    sum++;
        }


        printf("%d\n",sum);
    }
    return 0;
}
