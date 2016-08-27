#include<stdio.h>Example


#include<string.h>

int BS(char A[][101],int l,int r,char R[])
{
    int m = (l+r)/2;

  while (l <= r)
  {
    m=(l+r)/2;
    if (strcmp(A[m],R) == 0) return 1;
    if (strcmp(A[m],R) < 0) l = m + 1;
    else r = m - 1;
  }
  return -1;

}

int main()
{
    int T,N,i,j,f;
    char A[1000][101],R[101];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        for(j=0;j<N;j++)
            scanf("%s",A[j]);
        scanf("%s",R);
        f=BS(A,0,N-1,R);
        if(f==1)
            printf("yes\n");
        else
            printf("no\n");
    }
}
