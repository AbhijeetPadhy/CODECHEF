#include<stdio.h>

int main()
{
    int T,i,m;
    long int N,index,j;
    long long int K, A[100000],B[100000],C,D,P,r;
    int E[1000];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%ld %lld",&N,&K);
        for(j=0;j<N;j++)
            scanf("%lld",&A[j]);
        for(j=0;j<N;j++)
            scanf("%lld",&B[j]);
        index=0;
        for(j=0;j<N;j++)
        {
            if((K/A[j])*B[j]>(K/A[index])*B[index])
                index=j;
        }
        printf("%lld\n",(K/A[index])*B[index]);
        /*C=K/A[index];
        D=B[index];
        for(m=0;m<1000;m++)
            E[m]=0;
        r=0;
        for(m=0;C!=0;m++)
        {
            P=(C%10)*D+r;
            E[i]=P%10;
            r=P/10;
            C/=10;
        }
        for(;r!=0;r/=10)
            E[m++]=r%10;
        m--;
        for(;m>=0;m--)
            printf("%d",E[m]);
        printf("\n");
        */
    }

    return 0;
}
