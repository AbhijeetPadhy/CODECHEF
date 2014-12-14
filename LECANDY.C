#include<stdio.h>

int main()
{
    long int C,sum;
    int A[100],N,T,i,j;

    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d",&N,&C);
        sum=0;
        for(j=0;j<N;j++)
        {
            scanf("%d",&A[j]);
            sum+=A[j];
        }
        if(sum<=C)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
