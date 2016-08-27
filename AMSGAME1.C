#include<stdio.h>

int main()
{
    int T,N,i,j,k,flag,l,s;
    long long int A[1000],max,min,a;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        for(j=0;j<N;j++)
        {
            scanf("%lld",&A[j]);
        }

        flag=0;
        while(1)
        {
            flag=0;
            a=max=min=A[0];l=s=0;
            for(k=0;k<N;k++)
            {
                if(A[k]!=a)
                    flag=1;
                if(A[k]>max)
                {
                    max=A[k];
                    l=k;
                }
                if(A[k]<min)
                {
                    min=A[k];
                    s=k;
                }
            }
            if(flag==0)
                break;
            A[l]=A[l]-A[s];

        }

        printf("%lld\n",A[0]);
    }
    return 0;
}
