#include<stdio.h>

unsigned long long int pow(int);
unsigned long long int powerSet(int *set, int set_size,int k);
unsigned long long int bxor(unsigned long long int x, unsigned long long int y);

int main()
{
    int T,K,A[1000],i,j,N;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d",&N,&K);
        for(j=0;j<N;j++)
            scanf("%d",&A[j]);
        printf("%lld\n",powerSet(A,N,K));
    }
    return 0;
}

unsigned long long int powerSet(int *set, int set_size,int k)
{

    unsigned long long int pow_set_size = pow(set_size),x=0,max=bxor(x,k);
    int counter, j;

    for(counter = 0; counter < pow_set_size; counter++)
    {
      x=0;
      for(j = 0; j < set_size; j++)
       {
          if(counter & (1<<j))
            x=bxor(x,set[j]);
       }
       //printf("%lld^%d=%lld\n",x,k,bxor(x,k));
       if(bxor(x,k)>max)
        max=bxor(x,k);
    }
    return max;
}

unsigned long long int bxor(unsigned long long int x, unsigned long long int y)
{
    return ~( (x & y) | (~x & ~y) );
}

unsigned long long int pow(int a)
{
    unsigned long long int ans=1;
    int i;
    for(i=0;i<a;i++)
        ans*=2;
    return ans;
}
