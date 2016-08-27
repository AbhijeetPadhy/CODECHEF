#include<stdio.h>
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
int main()
{
    int T,i,A[10005];
    int N,j,max,sum;

    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        max=0;sum=0;
        for(j=0;j<N;j++){
            scanf("%d",&A[j]);
            if(A[j]>A[max])
                max=j;
        }
        for(j=0;j<N;j++)
            sum+=A[max]-A[j];

        printf("%d\n",sum);
    }
return 0;
}
