#include<stdio.h>

int main()
{
    int T,f,i,j;
    long long int N,n4,n7;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%lld",&N);
        f=-1;
        n7=0;n4=N-n7;
        for(;n7<=N;n7+=4,n4=N-n7)
            if(n4%7==0)
            {
                f=1;
                break;
            }
        if(f==-1)
            printf("%d\n",-1);
        else
            printf("%lld\n",n4);
    }
    return 0;
}
