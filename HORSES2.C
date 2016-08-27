#include<stdio.h>

int main()
{
    int T,N,i,j,k;
    long long int S[5000],diff,a;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);diff=0;
        for(j=0;j<N;j++)
        {
            scanf("%lld",&S[j]);
            if(S[j]>diff)
                diff=S[j];
        }
        for(j=0;j<N-1;j++)
        {
            for(k=j+1;k<N;k++)
            {
                a=S[j]-S[k];
                //printf("a=%lld",a);
                if(a>0)
                {
                    if(a<diff)
                        diff=a;
                }
                else
                {
                    if(-a<diff)
                        diff=-a;
                }
            }
        }
        printf("%lld\n",diff);

    }
    return 0;
}
