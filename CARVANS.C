#include<stdio.h>

int main()
{
    int T,N,n,i,j;
    int A[10000];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        n=1;
        scanf("%d",&A[0]);
        for(j=1;j<N;j++)
        {
            scanf("%d",&A[j]);
            if(A[j]>A[j-1])
                A[j]=A[j-1];
            else
                n++;
        }
        printf("%d\n",n);
    }
    return 0;
}
