#include<stdio.h>

int main()
{
    int T,i,j,n;
    long long int p;
    int A[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lld",&p);
        n=0;

        for(;p>=A[11];)
        {
            p-=A[11];
            n++;
        }
        for(j=10;j>=0&&p!=0;j--)
        {
            if(A[j]<=p)
            {
                p-=A[j];
                n++;
            }
        }
        printf("%d\n",n);
    }
    return 0;
}
