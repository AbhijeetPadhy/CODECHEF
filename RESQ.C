#include<stdio.h>
#include<math.h>
int main()
{
    int T,N,j,i,a,b;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        for(j=sqrt(N);j>=1;j--)
        {
            if(N%j==0)
                {
                    a=j;
                    break;
                }

        }
        b=a-N/a;
        if(b<0)
            b*=-1;
        printf("%d\n",b);
    }
    return 0;
}
