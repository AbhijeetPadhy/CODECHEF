#include<stdio.h>

int main()
{
    int T,N,i,j,k,a,b,f;
    int A;
    int B[2][100];
    scanf("%d",&T);

    for(i=0;i<T;i++)
    {
        a=0;
        for(j=0;j<100;j++)
            B[0][j]=B[1][j]=0;
        scanf("%d",&N);
        for(j=0;j<N;j++)
        {
            scanf("%d",&A);f=0;
            for(k=0;k<a;k++)
            {
                if(B[0][k]==A)
                {
                    B[1][k]++;f=1;
                    break;
                }
            }

            if(f==0)
            {
                a++;
                B[0][a-1]=A;
                B[1][a-1]=1;
            }
        }
        b=0;
        for(j=0;j<a;j++)
        {
            if(B[1][j]>B[1][b])
                b=j;
            else if(B[1][j]==B[1][b])
                if(B[0][j]<B[0][b])
                    b=j;
        }
        printf("%d %d\n",B[0][b],B[1][b]);
    }
    return 0;
}
