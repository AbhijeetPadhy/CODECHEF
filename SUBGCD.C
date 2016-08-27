#include<stdio.h>

long int gcd(long int a,long int b)
{
    long int t;
    while(1)
    {
        t=b%a;
        if(t==0)
            break;
        b=a;
        a=t;
    }
    //printf("%ld",a);
    return a;
}

int main()
{
    int T,k;
    long int N,A[100002],j,g;
    scanf("%d",&T);
    for(k=0;k<T;k++)
    {
        scanf("%ld",&N);
        scanf("%ld",&A[0]);
        scanf("%ld",&A[1]);
        g=gcd(A[0],A[1]);

        for(j=2;j<N;j++)
        {
            scanf("%ld",&A[j]);
            g=gcd(g,A[j]);
        }
        if(g==1)
            printf("%ld\n",N);
        else
            printf("-1\n");
    }
    return 0;
}
