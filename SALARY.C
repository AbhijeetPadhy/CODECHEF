#include<stdio.h>
int main()
{
    int T,i,A[10005];
    int N,j,count,m;
    int max,min;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        for(j=0;j<N;j++)
            scanf("%d",&A[j]);
        count=0;
        for(j=0,max=0,min=0;j<N;j++)
        {
            if(A[max]<A[j])
                max=j;

            if(A[min]>A[j])
                min=j;
        }
        for(;!(A[min]==A[max]);count++)
        {
            m=max;
            for(j=0;j<N;j++)
            {
                if(j!=m)
                    A[j]++;
                if(A[j]>A[max])
                    max=j;
                if(A[j]<A[min])
                    min=j;
                //printf("%d ",A[j]);
            }
            //printf(" max=%d min=%d\n",max,min);
        }

        printf("%d\n",count);
    }
    return 0;
}
