#include<stdio.h>

int main()
{
    int T;
    long long int N,div,d;
    int i,s=1,f;

    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lld",&N);
        if(N%2==0)
            printf("ALICE\n");
        else
            printf("BOB\n");
    }
    return 0;
}
