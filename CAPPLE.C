#include<stdio.h>

int main()
{
    int T,f,i;
    long int N,A[100000],m,j,max,min,a;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%ld",&N);
        for(j=0;j<N;j++)
            scanf("%ld",&A[j]);
        f=0;m=0;
        while(f!=1)
        {
            max=min=A[0];

            f=1;
            for(j=1;j<N;j++)
                if(A[j]!=A[0])
                {
                    f=0;
                    break;
                }
            if(f==0)
            {
                for(j=0;j<N;j++)
                {
                    if(A[j]>max)
                        max=A[j];
                    if(A[j]<min)
                        min=A[j];
                }
                a=max-min;
                for(j=0;j<N;j++)
                {
                    if(A[j]==max)
                        A[j]-=a;
                }
            }
            m++;
        }
        printf("%ld\n",m);
    }

    return 0;
}
