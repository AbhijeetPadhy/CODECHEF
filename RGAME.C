#include<stdio.h>
long long int recur(long long int A[],long long int i,long long int N,long long int l,long long int r);
int main(){
    long long int T,N,A[100000],i,max,pro,a,b,premax,j;
    scanf("%lld",&T);
    for(i=0;i<T;i++){
        scanf("%lld",&N);
        for(j=0;j<=N;j++)
            scanf("%lld",&A[j]);
        pro = recur(A,1,N,A[0],A[0]);
        printf("%lld\n",pro);
    }
    return 0;
}

long long int recur(long long int A[],long long int i,long long int N,long long int l,long long int r){
    if(i>N){
        return 0;
    }
    
    if(i==N)
        return (l*A[i]%1000000007 + r*A[i]%1000000007 + recur(A,i+1,N,A[i],r)%1000000007+ recur(A,i+1,N,l,A[i])%1000000007)%1000000007;
    else
        return (2*(l*A[i]%1000000007 + r*A[i]%1000000007) + recur(A,i+1,N,A[i],r)%1000000007+ recur(A,i+1,N,l,A[i])%1000000007)%1000000007;
}