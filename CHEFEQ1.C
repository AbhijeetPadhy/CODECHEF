#include<stdio.h>
int main()
{
    long int T;
    long int N,A[100000],j,i,index,no,B[100000],v;
    scanf("%ld",&T);
    for(i=0;i<T;i++)
    {
        long int a;
        scanf("%ld",&N);
        for(j=0;j<100000;j++)
            B[j]=0;
        for(j=0;j<N;j++)
        {
            scanf("%ld",&A[j]);
            B[A[j]-1]++;
        }



        v=1;
        for(j=0;j<100000;j++)
        {
            if(B[j]>v)
            {
                v=B[j];
            }
        }
        printf("%ld\n",N-v);

    }
    return 0;
}
