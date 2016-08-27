#include<stdio.h>

long long int maxDiff(long long int arr[], int arr_size)
{
  long long int max_diff = arr[1] - arr[0];
  long long int min_element = arr[0];
  int i;
  for(i = 1; i < arr_size; i++)
  {
    if(arr[i] - min_element > max_diff)
      max_diff = arr[i] - min_element;
    if(arr[i] < min_element)
         min_element = arr[i];
  }
  return max_diff;
}

int main()
{
    int T,N,i,j,k;
    long long int A[1000],max,a;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        for(j=0;j<N;j++)
            scanf("%lld",&A[j]);
        printf("%lld\n",maxDiff(A,N));
    }
    return 0;
}
