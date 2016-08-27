#include<stdio.h>

int main()
{
    int T,N,B[10000],i,j,t;
    long int sum;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        sum=0;t=0;
        for(j=0;j<N;j++)
        {
            scanf("%d",&B[j]);
            sum+=B[j];
            if (B[j]==0)
                t++;
        }

        if(sum>=100&&sum<=100+N-1-t)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
