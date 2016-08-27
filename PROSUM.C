#include<stdio.h>

void mergeSort(long int arr[],long int l, long int r);
void merge(long int arr[], long int l, long int m, long int r);
int main(){
    long int T,i,j,k,sum=0;
    long int N;
    long int A[100000];
    scanf("%ld",&T);
    for(i=0;i<T;i++){
        scanf("%ld",&N);
        for(j=0;j<N;j++)
            scanf("%ld",&A[j]);
        mergeSort(A,0,N-1);
        sum = 0;
        for(j=0;j<N-1;j++){
            for(k=j+1;k<N;k++){
                if(A[j]*A[k] > A[j] + A[k]){
                    sum += N-k;
                    break;
                }
            }

        }
        printf("%ld\n",sum);
    }

    return 0;
}

void merge(long int arr[], long int l, long int m, long int r)
{
    long int i, j, k;
    long int n1 = m - l + 1;
    long int n2 =  r - m;

    /* create temp arrays */
    long int L[n1], R[n2];

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
void mergeSort(long int arr[],long int l, long int r)
{
    if (l < r)
    {
        long int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
