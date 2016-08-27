#include<stdio.h>

void merge(long int L[],long int R[],long int A[],long int nL,long int nR)
{
    long int i=0,j=0,k=0;
    while(i<nL && j<nR)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            k=k+1;
            i=i+1;
        }
        else
        {
            A[k]=R[j];
            k=k+1;
            j=j+1;
        }
    }
    while(i<nL)
    {
        A[k]=L[i];
        i=i+1;
        k=k+1;
    }
    while(j<nR)
    {
        A[k]=R[j];
        j=j+1;
        k=k+1;
    }
}

void mergesort(long int A[],long int n)
{
    long int mid=n/2,i;
    long int L[mid];
    long int R[n-mid];
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
    long int T,i;
    scanf("%ld",&T);
    long int A[T];
    for(i=0;i<T;i++)
        scanf("%ld",&A[i]);
    mergesort(A,T);
    for(i=0;i<T;i++)
        printf("%ld\n",A[i]);
    return 0;
}
