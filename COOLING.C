#include<stdio.h>

void sort(int A[],int N)
{
    int i,j,tmp;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N-i-1;j++)
            if(A[j]<A[j+1])
            {
                tmp=A[j];
                A[j]=A[j+1];
                A[j+1]=tmp;
            }
    }
}

int main()
{
    int A[101],B[101];
    int i,T,N,n,k,j;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        n=0;
        scanf("%d",&N);
        for(j=0;j<N;j++)
            scanf("%d",&A[j]);
        for(j=0;j<N;j++)
            scanf("%d",&B[j]);
        sort(A,N);
        sort(B,N);
        for(j=0,k=0;j<N;j++)
        {
            if(A[j]<=B[k])
            {
                n++;
                k++;
            }
        }
        printf("%d\n",n);
    }
}
