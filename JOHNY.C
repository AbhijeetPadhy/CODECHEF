#include<stdio.h>

int main()
{
    long long int A[100];
    int T,K,N,i,j,L;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        L=1;
        scanf("%d",&N);
        for(j=0;j<N;j++)
            scanf("%lld",&A[j]);
        scanf("%d",&K);
        for(j=0;j<N;j++)
            if(A[j]<=A[K-1]&&j!=K-1)
                L++;
        printf("%d\n",L);
    }
    return 0;
}
