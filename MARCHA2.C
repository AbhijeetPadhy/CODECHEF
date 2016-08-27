#include<stdio.h>

int main()
{
    int T,i,flag;
    long int N,j;
    long int A[1000000],n=0;

    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%ld",&N);
        for(j=0;j<N;j++)
            scanf("%ld",&A[j]);
        flag=1;n=0;

        for(j=1;j<N;j++)
        {
            if(j==1)
            {
                if(A[j-1]>=1)
                {
                    flag=0;
                    break;
                }
                else
                    n=(1-A[j-1]);
            }
            else
            {
                if(A[j-1]>=2*n)
                {
                    flag=0;
                    break;
                }
                else
                {
                    n=2*n-A[j-1];
                }
            }
        }

        if(A[j-1]!=2*n)
            flag=0;
        if(N==1 && A[j-1]==1)
            flag=1;
        else
            flag=0;
        if(flag==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
