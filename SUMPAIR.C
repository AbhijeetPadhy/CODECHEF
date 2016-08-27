#include<stdio.h>

void merge(long long int arr[], long long int l, long long int m, long long int r);
void mergeSort(long long int arr[], long long int l, long long int r);

int main(){
    long long int T,N,D,A[100000],H[100000][3],i,j,sum;
    scanf("%lld",&T);
    for(i=0;i<T;i++){
        scanf("%lld %lld",&N,&D);
        for(j=0;j<N;j++)
            scanf("%lld",&A[j]);
        mergeSort(A,0,N-1);
        sum=0;
        for(j=N-1;j>=1;){
            if(A[j]-A[j-1]<D){
                sum=sum+A[j]+A[j-1];
                j-=2;

            }
            else{
                j-=1;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}

void merge(long long int arr[], long long int l, long long int m, long long int r)
{
    long long int i, j, k;
    long long int n1 = m - l + 1;
    long long int n2 =  r - m;
    long long int L[n1], R[n2];
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
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

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(long long int arr[],long long int l,long long int r)
{
    if (l < r)
    {
        long long int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
