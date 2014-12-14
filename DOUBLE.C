#include<stdio.h>

int main()
{
    int T,i;
    long long int N;

    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lld",&N);
        if(N%2!=0)
            printf("%lld\n",N-1);
        else
            printf("%lld\n",N);
    }
    return 0;
}
