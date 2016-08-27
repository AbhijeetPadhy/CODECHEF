#include<stdio.h>

int main()
{
    long long int N,M,q,i,j,A;
    scanf("%lld %lld",&N,&M);
    A=3*N-(N+1);
    for(i=0;i<M;i++)
    {
        scanf("%lld",&q);
        q=q-(N+1);
        if(q<1 || q>A)
            printf("0\n");
        else if(q<=A/2)
            printf("%lld\n",q);
        else
            printf("%lld\n",A-q+1);
    }
    return 0;
}
