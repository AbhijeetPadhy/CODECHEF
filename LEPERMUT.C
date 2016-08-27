#include<stdio.h>

int main()
{
    int T,N,i,f,j,k;
    int A[100];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        f=0;
        scanf("%d",&N);
        for(j=0;j<N;j++)
            scanf("%d",&A[j]);
        for(j=0;j<N;j++)
        {
            for(k=j+2;k<N;k++)
            {
                if(A[j]>A[k])
                    {
                        f=1;
                        break;
                    }
            }
        }
        if(f==1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
