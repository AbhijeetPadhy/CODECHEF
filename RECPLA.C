#include<stdio.h>

long long int power(long long int A[],int N, long long int C)
{
    long long int a=1,sum,min;
    int i,j,k;
    for(i=0;i<N;i++)
    a*=2;
    for(i=0;i<N;i++)
        if(A[i]<C)
        {
            min=C-A[i];
            break;
        }
    for(j=0;j<=a;j++)
    {
        sum=0;
        for(k=0;k<N;k++)
            if(j&(1<<k))
                sum+=A[k];
        if((C-sum)>=0&&(C-sum)<min)
            min=C-sum;

    }
    return min;
}

int main()
{
    int T,N,j,i;
    long long int C,A[20];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %lld",&N,&C);
        for(j=0;j<N;j++)
            scanf("%lld",&A[j]);
        printf("%lld\n",power(A,N,C));
    }
}
