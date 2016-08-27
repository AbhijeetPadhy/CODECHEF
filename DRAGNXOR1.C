#include<stdio.h>
#include<math.h>

long int fun(long int N,long int A,long int B);
long int xors(long int N,long int A,long int B);

int main()
{
    long int T,N,A,B,i,j,k,max;
    scanf("%ld",&T);
    for(i=0;i<T;i++)
    {
        scanf("%ld %ld %ld",&N,&A,&B);
        max=fun(N,A,B);
        printf("%ld\n",max);
    }
    return 0;
}

long int fun(long int N,long int A,long int B)
{
    long int max=0,na=0,nb=0,i,l,s,t,c=0,j;
    for(i=0;i<N;i++)
        if(A&(1<<i))
            na++;
    for(i=0;i<N;i++)
        if(B&(1<<i))
            nb++;
    if(na>nb)
        {l=na;s=nb;}
    else
        {l=nb;s=na;}
    if(l+s>N)
        c=l+s-N;

    for(i=1;i<=l-c;i++)
        {max+=pow(2,N-i);}
    for(j=1;j<=s-c;i++,j++)
        {max+=pow(2,N-i);}
    return max;
}

long int xors(long int N,long int A,long int B)
{
    long int num=0,i,a,b;
    for(i=0;i<N;i++)
    {
            a=0;b=0;
            if(A&(1<<i))
                a=1;
            if(B&(1<<i))
                b=1;
            a=(a^b);
            num+=pow(2,i)*a;
    }
    return num;
}
