#include<stdio.h>

inline long int maxDiff(long int arr[],long int arr_size)
{
  long int max_diff = arr[1] - arr[0];
  long int min_element = arr[0];
  long int i;
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
    int T;
    long int N,G[100000];
    register long int i,j,maxdiff;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%ld",&N);
        for(j=0;j<N;j++)
        {
            scanf("%ld",&G[j]);
        }
        if(N>1)
            maxdiff=maxDiff(G,N);
        else
            maxdiff=-1;
        if(maxdiff<=0)
            printf("UNFIT\n");
        else
            printf("%ld\n",maxdiff);
    }
    return 0;
}
