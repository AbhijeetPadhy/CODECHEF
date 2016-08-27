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
    long int ii,jj,r,a=pow(2,N),max=-1,na=0,nb=0,i,j,naa,nbb;
    for(i=0;i<N;i++)
        if(A&(1<<i))
            na++;
    for(i=0;i<N;i++)
        if(B&(1<<i))
            nb++;

    for(i=0;i<a;i++)
    {
        naa=0;
        for(j=0;j<N;j++)
            if(i&(1<<j))
                naa++;
        if(naa==na)
        {

            for(ii=0;ii<a;ii++)
            {
                nbb=0;
                for(jj=0;jj<N;jj++)
                    if(ii&(1<<jj))
                        nbb++;
                if(nbb==nb)
                {

                    r=xors(N,i,ii);

                    if(r>max)
                        max=r;
                }
            }
        }

    }
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
