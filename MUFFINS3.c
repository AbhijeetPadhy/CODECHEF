#include<stdio.h>
int main()
{
    int i,T;
    long long int N;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%lld",&N);
        printf("%lld\n",N/2+1);
    }
}
