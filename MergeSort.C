#include<stdio.h>

void merge(int L[],int R[],int A[],int nL,int nR)
{
    int i=0,j=0,k=0;
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

void mergesort(int A[],int n)
{
    int mid=n/2,i;
    int L[mid];
    int R[n-mid];
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
    int A[]={9,8,7,6,5,4,3,2,1},i;
    mergesort(A,9);
    for(i=0;i<9;i++)
        printf("%d",A[i]);
}
