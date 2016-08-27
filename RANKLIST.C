#include<stdio.h>

int rec(long int A[],long int a,long int i,long int n,long long int s,long long int sum)
{
    sum+=a;
    A[i]=a;

    if(i==n-1)
    {
        if(sum==s)
            return 1;
        else
            return 0;
    }
    if (rec(A,a,i+1,n,s,sum)==1)
        return 1;
    else if(rec(A,a+1,i+1,n,s,sum)==1)
        return 1;
    else return 0;
}


int main()
{
    long int T,i,j,n,A[100000];
    long long int sum,s;
    scanf("%ld",&T);
    for(i=0;i<T;i++)
    {
        scanf("%ld %lld",&n,&s);
        sum=n*(n+1)/2;
        if(sum==s)
            printf("0\n");
        else
        {
            rec(A,1,0,n,s,0);
            for(j=0;j<n;j++)
                if(A[j]!=j+1)
                    break;
            printf("%ld\n",n-j);
        }
    }
    return 0;
}
