#include<stdio.h>
void merge(long long int arr[],long long int l,long long int m,long long int r);
void mergeSort(long long int arr[],long long int l,long long int r);
int main()
{
    long long int N,D,i,j,sum,l,r;
    long long int L[100001];
    scanf("%lld %lld",&N,&D);
    for(i=0;i<N;i++)
        scanf("%lld",&L[i]);
    mergeSort(L,0,N-1);
    for(l=0,r=1;l<N && r<N;)
    {
        if(L[r]-L[l]<=D)
        {
            //printf("%lld %lld\n",L[l],L[r]);
            sum++;
            l=r+1;
            r=l+1;
        }
        else
        {
            l++;
            r++;
        }
    }
    printf("%lld",sum);
    return 0;
}




/* Function to merge the two haves arr[l..m] and arr[m+1..r] of array arr[] */
void merge(long long int arr[],long long int l,long long int m,long long int r)
{
    long long int i, j, k;
    long long int n1 = m - l + 1;
    long long int n2 =  r - m;

    /* create temp arrays */
    long long int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the sub-array
  of arr to be sorted */
void mergeSort(long long int arr[],long long int l,long long int r)
{
    if (l < r)
    {
        long long int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
