#include<stdio.h>

int main(){
    long long int T,i,j,a,b,c,N,A[100000],B[100000],avg,suma,sumb,flag;
    scanf("%lld",&T);
    for(i=0;i<T;i++){
        scanf("%lld",&N);
        suma = sumb = 0;
        for(j=0;j<N;j++){
            scanf("%lld",&B[j]);
            sumb+=B[j];
        }
        for(j=0;j<N;j++){
            scanf("%lld",&A[j]);
            suma+=A[j];
        }
        avg = (suma+sumb)/N;
        flag = 1;
        for(j=0;j<N;j++){
            b = B[j];
            if(j == 0)
                a = 0;
            else
                a = B[j-1];
            if(j == N-1)
                c = 0;
            else
                c = B[j+1];

            if(A[j]>avg){
                flag = 0;
                break;
            }
            if(A[j]+a == avg){
                if(j-1>=0)
                    B[j-1] = 0;
            }
            else if(A[j]+b == avg){
                B[j] = 0;
            }
            else if(A[j]+c == avg){
                if(j+1<=N-1)
                    B[j+1] = 0;
            }
            else if(A[j]+a+b == avg){
                B[j] = 0;
                if(j-1>=0)
                    B[j-1] = 0;
            }
            else if(A[j]+b+c == avg){
                B[j] = 0;
                if(j+1<=N-1)
                    B[j+1] = 0;
            }
            else if(A[j]+a+c == avg){
                if(j-1>=0)
                    B[j-1] = 0;
                if(j+1<=N-1)
                    B[j+1] = 0;
            }
            else if(A[j]+a+b+c == avg){
                B[j] = 0;
                if(j-1>=0)
                    B[j-1] = 0;
                if(j+1<=N-1)
                    B[j+1] = 0;
            }
            else {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            printf("-1\n");
        else
            printf("%lld\n",avg);
    }
    return 0;
}
