#include<stdio.h>

int main()
{
    long long int N,i;
    long long int sum=0;
    long long int a;
    scanf("%lld",&N);
    for(i=0;i<N;i++)
    {
        scanf("%lld",&a);
        sum+=a;
    }
    if(sum==((N*N+N)/2))
        printf("YES");
    else
        printf("NO");
    return 0;
}
