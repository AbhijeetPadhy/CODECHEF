#include<stdio.h>
#include<limits.h>

void merge(long long int arr[], int l, int m, int r);
void mergeSort(long long int arr[], int l, int r);
int main(){
        int T,n,count=0,i,j;
        long long int P[7],m;
        scanf("%d",&T);
        for(i=0;i<T;i++){
            count=0;
            scanf("%d %lld",&n,&m);
            for(j=0;j<n;j++){
                scanf("%lld",&P[j]);
            }
            mergeSort(P,0,n-1);
            j=0;
            while(1){
                m-=P[n-1-j++];
                count++;
                if(m<=0 || (n-1-j)==-1)
                    break;
            }
            if(m>0 && (n-1-j)==-1)
                printf("%d\n",-1);
            else
                printf("%d\n",count);
        }
        return 0;
}


void merge(long long int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
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

void mergeSort(long long int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

