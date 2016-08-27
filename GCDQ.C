#include<stdio.h>

long int gcd(long int n,long int m)
	{ if(m<=n && n%m == 0)
	   return m;
	  if(n < m)
	   return gcd(m,n);
	  else
	   return gcd(m,n%m);
	 }

int main()
{
    long int T,N,Q,L,R,i,k,l,m,GCD,j;
    long int A[100000];
    scanf("%ld",&T);
    for(i=0;i<T;i++)
    {
        scanf("%ld %ld",&N,&Q);
        for(j=0;j<N;j++)
            scanf("%ld",&A[j]);
        for(j=0;j<Q;j++)
        {
            scanf("%ld %ld",&L,&R);
            L--;R--;
            for(k=0;k<N;k++)
                if(k<L||k>R)
                    break;
            GCD=A[k];
            for(l=k+1;l<N;l++)
            {
                if(l>=L&&l<=R)
                    continue;
                GCD=gcd(GCD,A[l]);
            }
            printf("%ld\n",GCD);

        }
    }
    return 0;

}
