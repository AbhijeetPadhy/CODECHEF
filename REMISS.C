#include<stdio.h>

int main()
{
    int T,i;
    long long int A,B,max;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%lld %lld",&A,&B);
        max=(A>B)?A:B;
        printf("%lld %lld\n",max,A+B);
    }
    return 0;
}
