#include<stdio.h>

int main()
{
    int T;
    long int N,A[100000],sum,i,j,b,c,a;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        b=c=0;
        scanf("%ld",&N);
        sum=0;
        for(j=0;j<N;j++)
        {
            scanf("%ld",&A[j]);
            sum+=A[j];
        }
        if(sum%N==0)
            a=sum/N;
        else
            a=sum/N+1;
        for(j=0;j<N;j++)
            if(A[j]<a)
                b+=a-A[j];
            else if(A[j]>a)
                c+=A[j]-a;
        if(b>c)
            printf("%ld\n",b);
        else
            printf("%ld\n",c);

    }
}
