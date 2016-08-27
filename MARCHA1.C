#include<stdio.h>

unsigned long long int pow(int);
int powerSet(int *set, int set_size,int k);

int main()
{
    int T,K,A[20],i,j,N,f;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d",&N,&K);
        for(j=0;j<N;j++)
            scanf("%d",&A[j]);
        f=powerSet(A,N,K);
        if(f==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

int powerSet(int *set, int set_size,int k)
{

    unsigned long long int pow_set_size = pow(set_size),x=0;
    int counter, j;

    for(counter = 0; counter < pow_set_size; counter++)
    {
      x=0;
      for(j = 0; j < set_size; j++)
       {
          if(counter & (1<<j))
            x+=set[j];
       }
       if(x==k)
        return 1;
    }
    return 0;
}



unsigned long long int pow(int a)
{
    unsigned long long int ans=1;
    int i;
    for(i=0;i<a;i++)
        ans*=2;
    return ans;
}
