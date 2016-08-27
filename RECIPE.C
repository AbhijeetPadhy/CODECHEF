#include<stdio.h>

int main()
{
    int T,N,i,j,min,k,a;
    int A[50];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        for(j=0;j<N;j++)
        {
            scanf("%d",&A[j]);
        }
        min=A[0];
        for(j=0;j<N;j++)
            if(A[j]<min)
                min=A[j];
        a=1;
        for(j=min;j>=2;j--)
        {
            a=1;
            for(k=0;k<N;k++)
                if(A[k]%j!=0)
                    {
                        a=0;
                        break;
                    }
            if(a==1)
                for(k=0;k<N;k++)
                    A[k]/=j;
        }
        for(j=0;j<N;j++)
            printf("%d ",A[j]);
        printf("\n");
    }
    return 0;
}
