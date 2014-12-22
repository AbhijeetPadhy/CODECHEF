#include<stdio.h>

int main()
{
    long long int T,N,i;
    scanf("%lld",&T);
    for(i=0;i<T;i++)
    {
        scanf("%lld",&N);
        if(N%4==1)
            printf("ALICE\n");
        else
            printf("BOB\n");
    }
    return 0;
}
