#include<stdio.h>

int main()
{
    int T,N,X,A[101],i,j,sum=0,ans;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        sum=0;
        scanf("%d %d",&N,&X);
        for(j=0;j<N;j++)
        {
            scanf("%d",&A[j]);
            sum+=A[j];
        }
        ans=sum/X;
        for(j=0;j<N;j++)
            if(sum-A[j]>=ans*X)
            {
                ans=-1;
                break;
            }
        if(ans==0)ans=-1;
        printf("%d\n",ans);
    }
    return 0;
}
