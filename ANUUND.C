#include<stdio.h>

void merge(long long int L[],long long int R[],long long int A[],long int nL,long int nR)
{
    long int i=0,j=0,k=0;
    while(i<nL && j<nR)
    {
        if(L[i]<R[j])
        {
            A[k]=L[i];
            k++;
            i++;
        }
        else
        {
            A[k]=R[j];
            k++;
            j++;
        }
    }

    while(i<nL)
    {
        A[k]=L[i];
        k++;
        i++;
    }
    while(j<nR)
    {
        A[k]=R[j];
        k++;
        j++;
    }
}

void mergesort(long long int A[],long int n)
{
    long int mid=n/2,i;
    long long int L[mid];
    long long int R[n-mid];
    if(n<2)
        return;
    for(i=0;i<mid;i++)
        L[i]=A[i];
    for(i=mid;i<n;i++)
        R[i-mid]=A[i];
    mergesort(L,mid);
    mergesort(R,n-mid);
    merge(L,R,A,mid,n-mid);
}

int main()
{
    long int T, N,i,j,k,t;
    long long int A[100000];
    scanf("%ld",&T);
    for(i=0;i<T;i++)
    {
        scanf("%ld",&N);
        for(j=0;j<N;j++)
            scanf("%lld",&A[j]);
        mergesort(A,N);
        for(j=2;j<N;j+=2)
        {
            t=A[j];
            A[j]=A[j-1];
            A[j-1]=t;
        }
        for(j=0;j<N;j++)
            printf("%lld ",A[j]);
        printf("\n");
    }
    return 0;
}
