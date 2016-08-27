#include<stdio.h>

int main()
{
    long long int A,n,x,a;
    int N,i,j,K;

    scanf("%lld %d %d",&A,&N,&K);
    for(i=0;i<K;i++)
    {
        x=1;
        for(j=1;j<=i;j++)
            x*=N+1;
        a=A-x+1;
        if(a>0)
            if(a%x==0)
            a=a/x;
            else
            a=(a/x)+1;
        else
            if(-a%x==0)
            a=-(-a/x);
            else
            a=-(-a/x);
        n=a%(N+1);

        printf("%lld ",n);
    }
    return 0;

}
