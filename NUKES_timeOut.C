#include<stdio.h>

int main()
{
    long long int A,j,n,l;
    int N,K,i,B[100];
    scanf("%lld %d %d",&A,&N,&K);
    for(l=1;l<=A;l++)
    {
    for(i=0;i<K;i++)
    {
        B[i]=0;
    }
    for(j=1;j<=l;j++)
    {
        B[0]++;
        for(i=0;i<100;i++)
        {
            if(B[i]>N)
            {
                B[i]=0;
                B[i+1]++;
            }
        }
    }
    printf("%lld\t",l);
    for(i=0;i<K;i++)
        printf("%d ",B[i]);
    printf("\n");
    }
    return 0;

}
